
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_4 (char *VAR_1, int VAR_2, const char *VAR_3) {
  int VAR_4 = VAR_0 - VAR_2;
  FUNC_0 (VAR_4 > 0);
  int VAR_5 = FUNC_3 (VAR_1 + VAR_2, VAR_4, "/%s", VAR_3);
  if (VAR_5 >= VAR_4 - 1) {
    FUNC_2 ("append_path fail (buffer overflow)\n");
    FUNC_1 (1);
  }
  return VAR_2 + VAR_5;
}
