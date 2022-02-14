
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(void)
{
 unsigned long VAR_3;
 int VAR_4 = 0, VAR_5 = 0;

 FUNC_1(&VAR_2, VAR_3);
 if (VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (!FUNC_0(&VAR_1[VAR_5])) {
    VAR_4 = 1;
    break;
   }
  }
 }
 FUNC_2(&VAR_2, VAR_3);
 return VAR_4;
}
