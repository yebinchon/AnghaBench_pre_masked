
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rib_head {int rnh_addaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rib_head* FUNC_0 (int) ;

int
FUNC_1(void **VAR_2, int VAR_3)
{
 struct rib_head *VAR_4;

 VAR_4 = FUNC_0(32);
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_4->rnh_addaddr = VAR_1;
 *VAR_2 = (void *)VAR_4;

 if (VAR_0 == 0 ) {
  VAR_0 = 1;
 }
 return 1;
}
