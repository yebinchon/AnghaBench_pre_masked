
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char const*,char*,size_t) ;
 int * FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;

ssize_t FUNC_8(const char* VAR_4, char* VAR_5, size_t VAR_6) {
  ssize_t VAR_7;
  ssize_t VAR_8;
  ssize_t VAR_9;
  char* VAR_10;
  char VAR_11;
  char* VAR_12;
  char VAR_13[VAR_2 + 1];

  VAR_12 = FUNC_7(VAR_6 + 1);
  if (VAR_12 == ((void*)0)) {
    VAR_3 = VAR_1;
    return -1;
  }

  VAR_7 = FUNC_1(VAR_4, VAR_12, VAR_6);
  if (VAR_7 < 0) {
    FUNC_6(VAR_12);
    return VAR_7;
  }

  if (VAR_7 < 3 || FUNC_5("/$", VAR_12, 2) != 0) {

    FUNC_0(VAR_5, VAR_12, VAR_7);
    FUNC_6(VAR_12);
    return VAR_7;
  }





  VAR_12[VAR_7] = '\0';
  VAR_10 = FUNC_3(VAR_12 + 2, '/');
  if (VAR_10 == ((void*)0))

    VAR_10 = FUNC_3(VAR_12 + 2, '\0');


  VAR_11 = *VAR_10;
  *VAR_10 = '\0';
  if (FUNC_2(VAR_12, VAR_13) == ((void*)0)) {
    FUNC_6(VAR_12);
    return -1;
  }


  VAR_13[VAR_2] = '\0';


  *VAR_10 = VAR_11;
  VAR_9 = FUNC_4(VAR_10);
  VAR_8 = FUNC_4(VAR_13);
  VAR_7 = VAR_9 + VAR_8;
  if (VAR_7 > VAR_6) {
    FUNC_6(VAR_12);
    VAR_3 = VAR_0;
    return -1;
  }
  FUNC_0(VAR_5, VAR_13, VAR_8);
  FUNC_0(VAR_5 + VAR_8, VAR_10, VAR_9);


  FUNC_6(VAR_12);

  return VAR_7;
}
