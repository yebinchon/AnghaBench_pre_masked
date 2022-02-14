
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 double FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double) ;
 double VAR_1 ;
 int FUNC_2 (scalar_t__,int,double) ;
 double VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3 (void) {
  if (VAR_0) {
    return;
  }
  VAR_2 = FUNC_0 (VAR_3 ? VAR_3 * 2 : 1000000);
  VAR_1 = VAR_2 * 0.75;
  VAR_0 = FUNC_1 (VAR_2 * 4);
  FUNC_2 (VAR_0, 0xff, VAR_2 * 4);
  VAR_3 = 0;
}
