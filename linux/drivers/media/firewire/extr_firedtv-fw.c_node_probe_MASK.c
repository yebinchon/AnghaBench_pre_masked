
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee1394_device_id {int dummy; } ;
struct fw_unit {int device; int directory; } ;
struct firedtv {int isochannel; int voltage; int tone; int type; int list; int remote_ctrl_work; int demux_mutex; int avc_wait; int avc_mutex; int * device; } ;
typedef int name ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct firedtv*) ;
 int FUNC_3 (struct firedtv*) ;
 int VAR_4 ;
 int FUNC_4 (int *,struct firedtv*) ;
 int FUNC_5 (struct firedtv*,int ) ;
 int FUNC_6 (struct firedtv*,int *) ;
 int FUNC_7 (struct firedtv*) ;
 int FUNC_8 (int ,int ,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct firedtv*) ;
 struct firedtv* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int * VAR_5 ;
 int FUNC_14 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*,int ,int) ;

__attribute__((used)) static int FUNC_19(struct fw_unit *VAR_8, const struct ieee1394_device_id *VAR_9)
{
 struct firedtv *VAR_10;
 char VAR_11[VAR_3];
 int VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_4(&VAR_8->device, VAR_10);
 VAR_10->device = &VAR_8->device;
 VAR_10->isochannel = -1;
 VAR_10->voltage = 0xff;
 VAR_10->tone = 0xff;

 FUNC_14(&VAR_10->avc_mutex);
 FUNC_9(&VAR_10->avc_wait);
 FUNC_14(&VAR_10->demux_mutex);
 FUNC_1(&VAR_10->remote_ctrl_work, VAR_4);

 VAR_12 = FUNC_8(VAR_8->directory, VAR_0,
     VAR_11, sizeof(VAR_11));
 for (VAR_13 = FUNC_0(VAR_5); --VAR_13; )
  if (FUNC_17(VAR_5[VAR_13]) <= VAR_12 &&
      FUNC_18(VAR_11, VAR_5[VAR_13], VAR_12) == 0)
   break;
 VAR_10->type = VAR_13;

 VAR_14 = FUNC_6(VAR_10, &VAR_8->device);
 if (VAR_14)
  goto fail_free;

 FUNC_15(&VAR_7);
 FUNC_12(&VAR_10->list, &VAR_6);
 FUNC_16(&VAR_7);

 VAR_14 = FUNC_2(VAR_10);
 if (VAR_14)
  goto fail;

 VAR_14 = FUNC_5(VAR_10, VAR_5[VAR_10->type]);
 if (VAR_14)
  goto fail;

 FUNC_3(VAR_10);

 return 0;
fail:
 FUNC_15(&VAR_7);
 FUNC_13(&VAR_10->list);
 FUNC_16(&VAR_7);
 FUNC_7(VAR_10);
fail_free:
 FUNC_10(VAR_10);

 return VAR_14;
}
