
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char* VAR_1 ;
 int FUNC_1 (char*,char,char) ;
 int FUNC_2 (char*,int,char*,char*,char const*,int,int ) ;
 int FUNC_3 (char*,char const* const) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5 (int VAR_2, int *VAR_3, const char *const VAR_4, char VAR_5[VAR_0]) {
  const int VAR_6 = 64;
  char VAR_7[VAR_0];
  FUNC_3 (VAR_7, VAR_4);
  FUNC_1 (VAR_7, '/', '$');
  const char *VAR_8 = VAR_7, *VAR_9 = VAR_8 + FUNC_4 (VAR_8);
  if (VAR_9 - VAR_8 >= VAR_6) { VAR_8 = VAR_9 - VAR_6; }
  FUNC_0 (FUNC_2 (VAR_5, VAR_0, "%s/%s.%d.%d", VAR_1, VAR_8, VAR_2, (*VAR_3)++) < VAR_0);
}
