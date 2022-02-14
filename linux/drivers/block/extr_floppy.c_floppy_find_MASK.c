
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 struct kobject* FUNC_2 (int ) ;

__attribute__((used)) static struct kobject *FUNC_3(dev_t VAR_3, int *VAR_4, void *VAR_5)
{
 int VAR_6 = (*VAR_4 & 3) | ((*VAR_4 & 0x80) >> 5);
 if (VAR_6 >= VAR_0 || !FUNC_1(VAR_6))
  return ((void*)0);
 if (((*VAR_4 >> 2) & 0x1f) >= FUNC_0(VAR_2))
  return ((void*)0);
 *VAR_4 = 0;
 return FUNC_2(VAR_1[VAR_6]);
}
