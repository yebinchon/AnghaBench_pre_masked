
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static inline char *FUNC_3 (const char *VAR_2, int VAR_3) {
  FUNC_0 ((unsigned) VAR_3 <= 65535);
  char *VAR_4 = FUNC_1 (VAR_3 + 3) + 2;
  *((short *)(VAR_4 - 2)) = VAR_3;
  FUNC_2 (VAR_4, VAR_2, VAR_3);
  VAR_4[VAR_3] = 0;
  VAR_0++;
  VAR_1 += VAR_3 + 3;
  return VAR_4;
}
