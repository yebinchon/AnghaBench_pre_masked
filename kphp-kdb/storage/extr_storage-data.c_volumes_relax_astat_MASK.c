
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int * VAR_1 ;
 double FUNC_0 (double) ;
 int VAR_2 ;
 int FUNC_1 (int ,double) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2 (void) {
  static int VAR_4 = 0;
  double VAR_5 = VAR_4 ? FUNC_0 ((-VAR_0 / 86400.0) * (VAR_2 - VAR_4)) : 0.0;
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    FUNC_1 (VAR_1[VAR_6], VAR_5);
  }
  VAR_4 = VAR_2;
}
