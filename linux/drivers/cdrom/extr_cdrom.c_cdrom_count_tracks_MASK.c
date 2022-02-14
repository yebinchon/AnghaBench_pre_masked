
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xa; int cdi; int data; int audio; void* error; } ;
typedef TYPE_2__ tracktype ;
struct cdrom_tochdr {int cdte_format; int cdth_trk0; int cdth_trk1; int cdte_track; int cdte_ctrl; } ;
struct cdrom_tocentry {int cdte_format; int cdth_trk0; int cdth_trk1; int cdte_track; int cdte_ctrl; } ;
struct cdrom_device_info {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* audio_ioctl ) (struct cdrom_device_info*,int ,struct cdrom_tochdr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct cdrom_device_info*,int ,struct cdrom_tochdr*) ;
 int FUNC_2 (struct cdrom_device_info*,int ,struct cdrom_tochdr*) ;

__attribute__((used)) static void FUNC_3(struct cdrom_device_info *VAR_8, tracktype *VAR_9)
{
 struct cdrom_tochdr VAR_10;
 struct cdrom_tocentry VAR_11;
 int VAR_12, VAR_13;
 VAR_9->data = 0;
 VAR_9->audio = 0;
 VAR_9->cdi = 0;
 VAR_9->xa = 0;
 VAR_9->error = 0;
 FUNC_0(VAR_6, "entering cdrom_count_tracks\n");

 VAR_12 = VAR_8->ops->audio_ioctl(VAR_8, VAR_1, &VAR_10);
 if (VAR_12) {
  if (VAR_12 == -VAR_7)
   VAR_9->error = VAR_4;
  else
   VAR_9->error = VAR_5;
  return;
 }

 VAR_11.cdte_format = VAR_3;
 for (VAR_13 = VAR_10.cdth_trk0; VAR_13 <= VAR_10.cdth_trk1; VAR_13++) {
  VAR_11.cdte_track = VAR_13;
  if (VAR_8->ops->audio_ioctl(VAR_8, VAR_0, &VAR_11)) {
   VAR_9->error = VAR_5;
   return;
  }
  if (VAR_11.cdte_ctrl & VAR_2) {
   if (VAR_11.cdte_format == 0x10)
    VAR_9->cdi++;
   else if (VAR_11.cdte_format == 0x20)
    VAR_9->xa++;
   else
    VAR_9->data++;
  } else {
   VAR_9->audio++;
  }
  FUNC_0(VAR_6, "track %d: format=%d, ctrl=%d\n",
         VAR_13, VAR_11.cdte_format, VAR_11.cdte_ctrl);
 }
 FUNC_0(VAR_6, "disc has %d tracks: %d=audio %d=data %d=Cd-I %d=XA\n",
        VAR_10.cdth_trk1, VAR_9->audio, VAR_9->data,
        VAR_9->cdi, VAR_9->xa);
}
