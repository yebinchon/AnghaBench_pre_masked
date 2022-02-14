
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (void const*,size_t,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int,char const*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3 (const void *VAR_5, size_t VAR_6) {
  VAR_2 += VAR_6;
  VAR_3 = FUNC_0 (VAR_5, VAR_6, VAR_3);
  const int VAR_7 = VAR_6;
  const char *VAR_8 = VAR_5;
  while (VAR_6 > 0) {
    int VAR_9 = VAR_1 + VAR_0 - VAR_4;
    if (VAR_9 > VAR_6) {
      VAR_9 = VAR_6;
    }
    FUNC_2 (VAR_4, VAR_8, VAR_9);
    VAR_8 += VAR_9;
    VAR_4 += VAR_9;
    VAR_6 -= VAR_9;
    if (VAR_6 > 0) {
      FUNC_1 ();
    }
  }
  return VAR_7;
}
