
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int devpath; } ;
typedef enum sms_device_type_st { ____Placeholder_sms_device_type_st } sms_device_type_st ;
struct TYPE_2__ {char** fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 char*** VAR_4 ;
 int FUNC_2 (struct smscore_device_t*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(struct smscore_device_t *VAR_5,
         int VAR_6)
{
 char **VAR_7;
 int VAR_8 = FUNC_2(VAR_5);
 enum sms_device_type_st VAR_9;

 VAR_9 = FUNC_3(VAR_5->devpath);


 if (VAR_9 <= VAR_3 || VAR_9 >= VAR_2)
  return ((void*)0);
 if (VAR_6 <= VAR_1 || VAR_6 >= VAR_0)
  return ((void*)0);

 FUNC_0("trying to get fw name from sms_boards board_id %d mode %d\n",
    VAR_8, VAR_6);
 VAR_7 = FUNC_1(VAR_8)->fw;
 if (!VAR_7 || !VAR_7[VAR_6]) {
  FUNC_0("cannot find fw name in sms_boards, getting from lookup table mode %d type %d\n",
     VAR_6, VAR_9);
  return VAR_4[VAR_9][VAR_6];
 }

 return VAR_7[VAR_6];
}
