
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_registry_entry_t {int type; } ;
typedef enum sms_device_type_st { ____Placeholder_sms_device_type_st } sms_device_type_st ;


 int FUNC_0 (char*) ;
 struct smscore_registry_entry_t* FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0,
         enum sms_device_type_st VAR_1)
{
 struct smscore_registry_entry_t *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  VAR_2->type = VAR_1;
 else
  FUNC_0("No registry found.\n");
}
