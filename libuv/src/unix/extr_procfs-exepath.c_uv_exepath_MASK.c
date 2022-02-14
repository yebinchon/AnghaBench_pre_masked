
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(char* VAR_2, size_t* VAR_3) {
  ssize_t VAR_4;

  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || *VAR_3 == 0)
    return VAR_0;

  VAR_4 = *VAR_3 - 1;
  if (VAR_4 > 0)
    VAR_4 = FUNC_1("/proc/self/exe", VAR_2, VAR_4);

  if (VAR_4 == -1)
    return FUNC_0(VAR_1);

  VAR_2[VAR_4] = '\0';
  *VAR_3 = VAR_4;

  return 0;
}
