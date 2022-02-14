
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cdrom_device_info {int mc_flags; int use_count; scalar_t__ keeplocked; TYPE_1__* ops; } ;
struct TYPE_4__ {int curslot; } ;
struct cdrom_changer_info {TYPE_2__ hdr; } ;
struct TYPE_3__ {int (* media_changed ) (struct cdrom_device_info*,int) ;int (* check_events ) (struct cdrom_device_info*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_device_info*,int) ;
 int FUNC_3 (struct cdrom_device_info*,struct cdrom_changer_info*) ;
 int FUNC_4 (struct cdrom_changer_info*) ;
 struct cdrom_changer_info* FUNC_5 (int,int ) ;
 int FUNC_6 (struct cdrom_device_info*,int ,int) ;
 int FUNC_7 (struct cdrom_device_info*,int) ;

__attribute__((used)) static int FUNC_8(struct cdrom_device_info *VAR_8, int VAR_9)
{
 struct cdrom_changer_info *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_1(VAR_3, "entering cdrom_select_disc()\n");
 if (!FUNC_0(VAR_0))
  return -VAR_5;

 if (VAR_8->ops->check_events)
  VAR_8->ops->check_events(VAR_8, 0, VAR_9);
 else
  VAR_8->ops->media_changed(VAR_8, VAR_9);

 if (VAR_9 == VAR_2) {

  VAR_8->mc_flags = 0x3;
  return FUNC_2(VAR_8, -1);
 }

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_7);
 if (!VAR_10)
  return -VAR_6;

 if ((VAR_12 = FUNC_3(VAR_8, VAR_10))) {
  FUNC_4(VAR_10);
  return VAR_12;
 }

 VAR_11 = VAR_10->hdr.curslot;
 FUNC_4(VAR_10);

 if (VAR_8->use_count > 1 || VAR_8->keeplocked) {
  if (VAR_9 == VAR_1) {
       return VAR_11;
  } else {
   return -VAR_4;
  }
 }






 if (VAR_9 == VAR_1)
  VAR_9 = VAR_11;


 VAR_8->mc_flags = 0x3;
 if ((VAR_12 = FUNC_2(VAR_8, VAR_9)))
  return VAR_12;

 return VAR_9;
}
