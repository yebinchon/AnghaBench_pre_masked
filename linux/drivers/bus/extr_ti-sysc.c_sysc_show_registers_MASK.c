
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int module_size; int module_pa; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,char*) ;
 int FUNC_1 (char*,struct sysc*) ;
 int FUNC_2 (struct sysc*,char*,int) ;
 int FUNC_3 (char*,struct sysc*) ;

__attribute__((used)) static void FUNC_4(struct sysc *VAR_1)
{
 char VAR_2[128];
 char *VAR_3 = VAR_2;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += FUNC_2(VAR_1, VAR_3, VAR_4);

 VAR_3 += FUNC_3(VAR_3, VAR_1);
 VAR_3 += FUNC_1(VAR_3, VAR_1);

 FUNC_0(VAR_1->dev, "%llx:%x%s\n",
  VAR_1->module_pa, VAR_1->module_size,
  VAR_2);
}
