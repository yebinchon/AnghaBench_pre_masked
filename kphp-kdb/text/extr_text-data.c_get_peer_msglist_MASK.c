
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int,int *) ;

int FUNC_5 (int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  static listree_t VAR_8;
  int VAR_9;

  VAR_3 = 0;

  int VAR_10 = FUNC_4 (VAR_4, VAR_5, &VAR_8);
  if (VAR_10 <= 0) {
    return VAR_10;
  }

  VAR_9 = FUNC_3 (&VAR_8);
  FUNC_0 (VAR_9 >= 0);
  if (!VAR_9) {
    return 0;
  }

  if (!VAR_6 || !VAR_7) {
    return VAR_9;
  }
  if (VAR_6 < 0) {
    VAR_6 += VAR_9;
  } else {
    VAR_6--;
  }
  if (VAR_7 < 0) {
    VAR_7 += VAR_9;
  } else {
    VAR_7--;
  }

  if (VAR_6 <= VAR_7) {
    VAR_7 = VAR_7 - VAR_6 + 1;
    if ((unsigned) VAR_7 > VAR_0) {
      VAR_7 = VAR_0;
    }
    VAR_2 = VAR_1;
    VAR_3 = FUNC_1 (&VAR_8, VAR_6, VAR_7);
  } else {
    VAR_7 = VAR_6 - VAR_7 + 1;
    if ((unsigned) VAR_7 > VAR_0) {
      VAR_7 = VAR_0;
    }
    VAR_2 = VAR_1;
    VAR_3 = FUNC_2 (&VAR_8, VAR_9 - 1 - VAR_6, VAR_7);
  }

  FUNC_0 (VAR_3 >= 0 && VAR_3 <= VAR_7);

  return VAR_9;
}
