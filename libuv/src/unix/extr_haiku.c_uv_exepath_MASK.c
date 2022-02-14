
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ status_t ;
typedef scalar_t__ ssize_t ;
typedef int abspath ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int *,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;

int FUNC_3(char* VAR_5, size_t* VAR_6) {
  char VAR_7[VAR_3];
  status_t VAR_8;
  ssize_t VAR_9;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || *VAR_6 == 0)
    return VAR_4;

  VAR_8 = FUNC_1(VAR_0, VAR_1, ((void*)0), VAR_7,
                     sizeof(VAR_7));
  if (VAR_8 != VAR_2)
    return FUNC_0(VAR_8);

  VAR_9 = FUNC_2(VAR_5, VAR_7, *VAR_6);
  *VAR_6 -= 1;
  if (VAR_9 >= 0 && *VAR_6 > (size_t)VAR_9)
    *VAR_6 = (size_t)VAR_9;

  return 0;
}
