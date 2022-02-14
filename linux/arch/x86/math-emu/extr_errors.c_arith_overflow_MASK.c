
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int VAR_7 ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(FPU_REG *VAR_8)
{
 int VAR_9 = VAR_6;

 if (VAR_7 & VAR_1) {


  FUNC_2(&VAR_0, VAR_8);
  VAR_9 = VAR_5;
 } else {

  FUNC_1(VAR_8, (-3 * (1 << 13)));
 }

 FUNC_0(VAR_2);
 if (VAR_7 & VAR_1) {




  FUNC_0(VAR_3 | VAR_4);
  return VAR_9;
 }

 return VAR_9;

}
