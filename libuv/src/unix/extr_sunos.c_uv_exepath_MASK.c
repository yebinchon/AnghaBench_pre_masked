
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;

int FUNC_4(char* VAR_2, size_t* VAR_3) {
  ssize_t VAR_4;
  char VAR_5[128];

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || *VAR_3 == 0)
    return VAR_0;

  FUNC_3(VAR_5, sizeof(VAR_5), "/proc/%lu/path/a.out", (unsigned long) FUNC_1());

  VAR_4 = *VAR_3 - 1;
  if (VAR_4 > 0)
    VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_4);

  if (VAR_4 == -1)
    return FUNC_0(VAR_1);

  VAR_2[VAR_4] = '\0';
  *VAR_3 = VAR_4;
  return 0;
}
