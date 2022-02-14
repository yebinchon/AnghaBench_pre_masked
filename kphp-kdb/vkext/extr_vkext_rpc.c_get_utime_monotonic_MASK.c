
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_sec; scalar_t__ tv_nsec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,struct timespec*) ;
 int VAR_1 ;

__attribute__((used)) static double FUNC_5 (void) {
  FUNC_0 (VAR_1);
  FUNC_2 (VAR_1);
  struct timespec VAR_2;
  FUNC_3 (FUNC_4(VAR_0, &VAR_2) >= 0);
  FUNC_1 (VAR_1);
  return VAR_2.tv_sec + (double) VAR_2.tv_nsec * 1e-9;
}
