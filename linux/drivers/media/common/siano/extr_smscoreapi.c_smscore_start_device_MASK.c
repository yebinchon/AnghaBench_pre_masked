
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int device; int devpath; } ;
struct TYPE_2__ {int default_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct smscore_device_t*,int) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (struct smscore_device_t*) ;
 int FUNC_6 (struct smscore_device_t*) ;
 int FUNC_7 (struct smscore_device_t*) ;
 int FUNC_8 (struct smscore_device_t*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct smscore_device_t*,int) ;

int FUNC_11(struct smscore_device_t *VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_6(VAR_3);
 int VAR_6 = FUNC_9(VAR_3->devpath);


 if (VAR_5 != VAR_1 && VAR_6 == VAR_0)
  VAR_6 = FUNC_4(VAR_5)->default_mode;

 VAR_4 = FUNC_10(VAR_3, VAR_6);
 if (VAR_4 < 0) {
  FUNC_3("set device mode failed , rc %d\n", VAR_4);
  return VAR_4;
 }
 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 < 0) {
  FUNC_3("configure board failed , rc %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_0(&VAR_2);

 VAR_4 = FUNC_8(VAR_3, VAR_3->device, 1);
 FUNC_7(VAR_3);

 FUNC_2("device %p started, rc %d\n", VAR_3, VAR_4);

 FUNC_1(&VAR_2);

 return VAR_4;
}
