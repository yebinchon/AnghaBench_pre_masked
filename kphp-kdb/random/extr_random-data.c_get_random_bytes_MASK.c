
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4 (void *VAR_2, int VAR_3) {
  int VAR_4 = 0, VAR_5 = FUNC_1 ("/dev/random", VAR_1 | VAR_0);
  if (VAR_5 >= 0) {
    VAR_4 = FUNC_2 (VAR_5, VAR_2, VAR_3);
    if (VAR_4 > 0) {
      FUNC_3 (3, "added %d bytes of real entropy to the security key\n", VAR_4);
    }
    FUNC_0 (VAR_5);
  }

  if (VAR_4 < VAR_3) {
    VAR_5 = FUNC_1 ("/dev/urandom", VAR_1);
    if (VAR_5 < 0) {
      return VAR_4;
    }
    int VAR_6 = FUNC_2 (VAR_5, VAR_2 + VAR_4, VAR_3 - VAR_4);
    FUNC_0 (VAR_5);
    if (VAR_6 < 0) {
      return VAR_4;
    }
    VAR_4 += VAR_6;
  }
  return VAR_4;
}
