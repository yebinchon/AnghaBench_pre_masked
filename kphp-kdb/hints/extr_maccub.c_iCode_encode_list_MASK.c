
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iCode_iterator ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int,int ,unsigned char**,int*) ;
 int FUNC_2 (int *,unsigned char*,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,unsigned char**,int*,int) ;

int FUNC_6 (int *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3) {
  FUNC_0 (VAR_1 > 0);

  unsigned char *VAR_4 = VAR_3;

  int VAR_5 = 8;
  VAR_3--;
  FUNC_5 (VAR_1 - 1, &VAR_3, &VAR_5, VAR_2);
  FUNC_1 (VAR_0, VAR_1, VAR_2, 0, &VAR_3, &VAR_5);


  int VAR_6;
  iCode_iterator VAR_7;
  FUNC_2 (&VAR_7, VAR_4, VAR_2, VAR_3 - VAR_4 + 1, VAR_2);




  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {

    FUNC_0 (FUNC_4 (&VAR_7) == VAR_0[VAR_6]);
    FUNC_3 (&VAR_7);
  }
  FUNC_0 (FUNC_4 (&VAR_7) == 0);

  return VAR_3 - VAR_4 + 1;
}
