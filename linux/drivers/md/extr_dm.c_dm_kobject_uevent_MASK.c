
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int disk; } ;
typedef enum kobject_action { ____Placeholder_kobject_action } kobject_action ;
struct TYPE_2__ {int kobj; } ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char**) ;
 int FUNC_3 (char*,int,char*,char*,unsigned int) ;

int FUNC_4(struct mapped_device *VAR_2, enum kobject_action VAR_3,
         unsigned VAR_4)
{
 char VAR_5[VAR_1];
 char *VAR_6[] = { VAR_5, ((void*)0) };

 if (!VAR_4)
  return FUNC_1(&FUNC_0(VAR_2->disk)->kobj, VAR_3);
 else {
  FUNC_3(VAR_5, VAR_1, "%s=%u",
    VAR_0, VAR_4);
  return FUNC_2(&FUNC_0(VAR_2->disk)->kobj,
       VAR_3, VAR_6);
 }
}
