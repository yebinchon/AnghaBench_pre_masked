
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct device {int dummy; } ;
struct dev_table_entry {int dummy; } ;


 int * VAR_0 ;
 int ** VAR_1 ;
 size_t FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return;

 VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_0[VAR_4], 0, sizeof(struct dev_table_entry));
 FUNC_2(&VAR_0[VAR_3], 0, sizeof(struct dev_table_entry));

 VAR_1[VAR_4] = ((void*)0);
 VAR_1[VAR_3] = ((void*)0);
}
