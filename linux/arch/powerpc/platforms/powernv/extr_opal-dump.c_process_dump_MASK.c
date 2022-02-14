
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kobject {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (struct kobject*) ;
 struct kobject* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 char VAR_9[22];
 struct kobject *VAR_10;

 VAR_5 = FUNC_1(&VAR_6, &VAR_7, &VAR_8);
 if (VAR_5 != VAR_1)
  return VAR_0;

 FUNC_4(VAR_9, "0x%x-0x%x", VAR_8, VAR_6);





 VAR_10 = FUNC_3(VAR_2, VAR_9);
 if (VAR_10) {

  FUNC_2(VAR_10);
  return VAR_0;
 }

 FUNC_0(VAR_6, VAR_7, VAR_8);

 return VAR_0;
}
