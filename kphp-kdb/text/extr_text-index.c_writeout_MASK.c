
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void const*,size_t,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3 (const void *VAR_6, size_t VAR_7) {
  const char *VAR_8 = VAR_6;
  VAR_2 = FUNC_0 (VAR_6, VAR_7, VAR_2);
  while (VAR_7 > 0) {
    int VAR_9 = VAR_1 + VAR_0 - VAR_4;
    if (VAR_9 > VAR_7) {
      VAR_9 = VAR_7;
    }
    FUNC_2 (VAR_4, VAR_8, VAR_9);
    VAR_8 += VAR_9;
    VAR_4 += VAR_9;
    VAR_5 += VAR_9;
    VAR_3 += VAR_9;
    VAR_7 -= VAR_9;
    if (VAR_7 > 0) {
      FUNC_1();
    }
  }
}
