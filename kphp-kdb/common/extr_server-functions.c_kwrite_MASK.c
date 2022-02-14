
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char**,char*,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,void const*,size_t) ;

ssize_t FUNC_5 (int VAR_3, const void *VAR_4, size_t VAR_5) {
  int VAR_6 = VAR_2;


  char VAR_7[100], *VAR_8 = VAR_7 + 100;

  FUNC_2 (&VAR_8, "time", 4, FUNC_3 (((void*)0)));
  FUNC_2 (&VAR_8, "pid" , 3, FUNC_1 ());

  FUNC_0 (VAR_8 >= VAR_7);

  size_t VAR_9 = VAR_7 + 100 - VAR_8;
  ssize_t VAR_10 = VAR_9 + VAR_5;
  while (VAR_9 > 0) {
    VAR_2 = 0;
    ssize_t VAR_11 = FUNC_4 (VAR_3, VAR_8, VAR_9);
    if (VAR_2 && VAR_2 != VAR_0) {
      VAR_2 = VAR_6;
      return VAR_11;
    }
    if (!VAR_11) {
      break;
    }
    if (VAR_11 >= 0) {
      VAR_8 += VAR_11;
      VAR_9 -= VAR_11;
    }
  }

  while (VAR_5 > 0) {
    VAR_2 = 0;
    ssize_t VAR_12 = FUNC_4 (VAR_3, VAR_4, VAR_5);
    if (VAR_2 && VAR_2 != VAR_0) {
      VAR_2 = VAR_6;
      return VAR_12;
    }
    if (!VAR_12) {
      break;
    }
    if (VAR_12 >= 0) {
      VAR_4 += VAR_12;
      VAR_5 -= VAR_12;
    }
  }

  VAR_2 = VAR_6;
  return VAR_10;

}
