
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_registry_entry_t {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct smscore_registry_entry_t* FUNC_1 (char*) ;

int FUNC_2(char *VAR_1)
{
 struct smscore_registry_entry_t *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2->mode;
 else
  FUNC_0("No registry found.\n");

 return VAR_0;
}
