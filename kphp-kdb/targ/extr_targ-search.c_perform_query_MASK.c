
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dyn_mark_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,double) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;

int FUNC_6 (int VAR_8) {
  dyn_mark_t VAR_9;
  FUNC_1 (VAR_9);

  double VAR_10 = -FUNC_4 (VAR_0);

  int VAR_11 = FUNC_5 (VAR_8);

  VAR_10 += FUNC_4 (VAR_0);
  if (VAR_7 > 1) {
    FUNC_3 (VAR_4, "query performed in %.6f seconds\n", VAR_10);
  }

  VAR_6 += VAR_10;
  VAR_5++;

  VAR_3[15]++;
  VAR_2[15] += VAR_11;



  if (VAR_7 > 2 && !(VAR_5 & (VAR_1 - 1))) {
    FUNC_0 ();
  }

  FUNC_2 (VAR_9);
  return VAR_11;
}
