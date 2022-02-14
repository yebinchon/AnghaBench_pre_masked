
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int* FUNC_2 (size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;

int *FUNC_6 (int VAR_1) {
  int *VAR_2 = FUNC_2 ((size_t)VAR_1 * sizeof (int)), VAR_3;

  FUNC_5 (1);
  struct timespec VAR_4;
  FUNC_0 (FUNC_1 (VAR_0, &VAR_4) >= 0);
  FUNC_4 ((unsigned int)VAR_4.tv_nsec * 123456789u + (unsigned int)VAR_4.tv_sec * 987654321u);

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    VAR_2[VAR_3] = FUNC_3() % (VAR_3 + 1);
  }

  return VAR_2;
}
