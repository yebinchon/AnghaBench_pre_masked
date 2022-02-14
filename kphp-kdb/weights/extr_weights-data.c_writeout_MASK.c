
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*,size_t,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int,char const*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3 (const void *VAR_4, size_t VAR_5) {
  VAR_2 = FUNC_0 (VAR_4, VAR_5, VAR_2);
  const int VAR_6 = VAR_5;
  const char *VAR_7 = VAR_4;
  while (VAR_5 > 0) {
    int VAR_8 = VAR_1 + VAR_0 - VAR_3;
    if (VAR_8 > VAR_5) {
      VAR_8 = VAR_5;
    }
    FUNC_2 (VAR_3, VAR_7, VAR_8);
    VAR_7 += VAR_8;
    VAR_3 += VAR_8;
    VAR_5 -= VAR_8;
    if (VAR_5 > 0) {
      FUNC_1 ();
    }
  }
  return VAR_6;
}
