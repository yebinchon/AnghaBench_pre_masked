
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_6, VAR_7 = 0;

 FUNC_3(&VAR_5);
 if (VAR_2++)
  goto out;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = FUNC_0(&VAR_4[VAR_6]);
  if (VAR_7) {
   FUNC_2();
   goto out;
  }
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_1(&VAR_3[VAR_6]);
  if (VAR_7) {
   FUNC_2();
   goto out;
  }
 }

out:
 FUNC_4(&VAR_5);
 return VAR_7;
}
