
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int unit; int kobj; int user_device; int user_cdev; } ;
typedef int name ;


 char* FUNC_0 () ;
 int FUNC_1 (int,char*,int *,int *,int *,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*,char*,int) ;
 int FUNC_3 (struct hfi1_devdata*) ;

__attribute__((used)) static int FUNC_4(struct hfi1_devdata *VAR_1)
{
 char VAR_2[10];
 int VAR_3;

 FUNC_2(VAR_2, sizeof(VAR_2), "%s_%d", FUNC_0(), VAR_1->unit);
 VAR_3 = FUNC_1(VAR_1->unit, VAR_2, &VAR_0,
        &VAR_1->user_cdev, &VAR_1->user_device,
        1, &VAR_1->kobj);
 if (VAR_3)
  FUNC_3(VAR_1);

 return VAR_3;
}
