
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lookup ;


 int FUNC_0 (int*,size_t) ;
 int* FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*,int*,int,int) ;
 int FUNC_4 (int*,int*,int,char*,int) ;

int FUNC_5 (lookup *VAR_0, char *VAR_1, int VAR_2, int VAR_3) {
  char *VAR_4 = VAR_1;

  int VAR_5 = FUNC_2 (VAR_0);
  size_t VAR_6 = sizeof (int) * VAR_5;
  int *VAR_7 = FUNC_1 (VAR_6),
     *VAR_8 = FUNC_1 (VAR_6);

  int VAR_9 = FUNC_3 (VAR_0, VAR_7, VAR_8, VAR_5, VAR_3);

  int VAR_10 = FUNC_4 (VAR_7, VAR_8, VAR_9, VAR_4, VAR_2);
  VAR_4 += VAR_10;
  VAR_2 -= VAR_10;

  FUNC_0 (VAR_7, VAR_6);
  FUNC_0 (VAR_8, VAR_6);

  return VAR_4 - VAR_1;
}
