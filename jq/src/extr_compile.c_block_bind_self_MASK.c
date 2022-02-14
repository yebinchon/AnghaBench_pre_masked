
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inst ;
typedef int block ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

block FUNC_7(block VAR_1, int VAR_2) {
  FUNC_1(FUNC_3(VAR_1, VAR_2));
  VAR_2 |= VAR_0;
  block VAR_3 = FUNC_5();

  inst* VAR_4;
  while ((VAR_4 = FUNC_4(&VAR_1))) {
    block VAR_5 = FUNC_6(VAR_4);
    FUNC_2(VAR_5, VAR_3, VAR_2, 0);
    VAR_3 = FUNC_0(VAR_5, VAR_3);
  }
  return VAR_3;
}
