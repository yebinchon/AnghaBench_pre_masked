
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,unsigned char*,int) ;
 unsigned char* FUNC_4 (int) ;

__attribute__((used)) static unsigned char *FUNC_5 (const char *VAR_1, int *VAR_2, time_t *VAR_3) {
  int VAR_4 = FUNC_2 (VAR_1, VAR_0);
  if (VAR_4 < 0) {
    return ((void*)0);
  }
  *VAR_2 = FUNC_1 (VAR_4, VAR_3);
  if (*VAR_2 < 0) {
    FUNC_0 (VAR_4);
    return ((void*)0);
  }
  unsigned char *VAR_5 = FUNC_4 ((*VAR_2 + 3) & -4);
  int VAR_6 = FUNC_3 (VAR_4, VAR_5, *VAR_2);
  FUNC_0 (VAR_4);
  if (VAR_6 != *VAR_2) {
    return ((void*)0);
  }
  return VAR_5;
}
