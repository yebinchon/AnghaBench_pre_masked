
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_0(char VAR_3[4], int VAR_4) {
  char *VAR_5 = VAR_3;
  if (VAR_4 & VAR_2) *VAR_5++ = 'm';
  if (VAR_4 & VAR_1) *VAR_5++ = 'i';
  if (VAR_4 & VAR_0) *VAR_5++ = 'x';
  *VAR_5 = 0;
  return VAR_3;
}
