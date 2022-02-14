
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_x_point {int x; } ;
struct fixed31_32 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fixed31_32,int *) ;
 struct hw_x_point* VAR_1 ;
 struct fixed31_32 FUNC_1 (int,int) ;
 struct fixed31_32 FUNC_2 (int ,struct fixed31_32) ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_3(void)
{
 int VAR_4;
 struct fixed31_32 VAR_5;
 const struct hw_x_point *VAR_6 = VAR_1 + 32;
 struct fixed31_32 VAR_7 =
   FUNC_1(80, 10000);


 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  VAR_3[VAR_4] = VAR_2;

 for (VAR_4 = 32; VAR_4 <= VAR_0; VAR_4++) {
  VAR_5 = FUNC_2(VAR_6->x, VAR_7);
  FUNC_0(VAR_5, &VAR_3[VAR_4]);
  ++VAR_6;
 }
}
