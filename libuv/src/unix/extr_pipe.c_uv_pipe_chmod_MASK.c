
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_pipe_t ;
struct stat {unsigned int st_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_12 ;
 int FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,size_t*) ;

int FUNC_7(uv_pipe_t* VAR_13, int VAR_14) {
  unsigned VAR_15;
  struct stat VAR_16;
  char* VAR_17;
  size_t VAR_18;
  int VAR_19;

  if (VAR_13 == ((void*)0) || FUNC_5(VAR_13) == -1)
    return VAR_6;

  if (VAR_14 != VAR_10 &&
      VAR_14 != VAR_11 &&
      VAR_14 != (VAR_11 | VAR_10))
    return VAR_7;


  VAR_18 = 0;
  VAR_19 = FUNC_6(VAR_13, ((void*)0), &VAR_18);
  if (VAR_19 != VAR_8)
    return VAR_19;

  VAR_17 = FUNC_4(VAR_18);
  if (VAR_17 == ((void*)0))
    return VAR_9;

  VAR_19 = FUNC_6(VAR_13, VAR_17, &VAR_18);
  if (VAR_19 != 0) {
    FUNC_3(VAR_17);
    return VAR_19;
  }


  if (FUNC_2(VAR_17, &VAR_16) == -1) {
    FUNC_3(VAR_17);
    return -VAR_12;
  }

  VAR_15 = 0;
  if (VAR_14 & VAR_10)
    VAR_15 |= VAR_2 | VAR_0 | VAR_1;
  if (VAR_14 & VAR_11)
    VAR_15 |= VAR_5 | VAR_3 | VAR_4;


  if ((VAR_16.st_mode & VAR_15) == VAR_15) {
    FUNC_3(VAR_17);
    return 0;
  }

  VAR_16.st_mode |= VAR_15;

  VAR_19 = FUNC_1(VAR_17, VAR_16.st_mode);
  FUNC_3(VAR_17);

  return VAR_19 != -1 ? 0 : FUNC_0(VAR_12);
}
