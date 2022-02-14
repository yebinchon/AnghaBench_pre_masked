
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_counter_config {scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_4(struct op_counter_config *VAR_4)
{
 int VAR_5;

 FUNC_2(FUNC_1() | VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (VAR_4[VAR_5].enabled)
   FUNC_0(VAR_5, VAR_3[VAR_5]);
  else
   FUNC_0(VAR_5, 0);
 }




 FUNC_3();

 VAR_2 = 1;

 return 0;
}
