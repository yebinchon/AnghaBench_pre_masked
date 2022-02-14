
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct connection*,char const*,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;

int FUNC_2 (struct connection *VAR_5, const char *VAR_6, int VAR_7) {
  int VAR_8;
  VAR_3 = VAR_2;
  for (VAR_8 = 0; VAR_8 <= VAR_4 && VAR_3 < VAR_2 + VAR_1; VAR_8++) {
    FUNC_1 (&VAR_0[VAR_8]);
  }
  return FUNC_0 (VAR_5, VAR_6, VAR_7, VAR_4+1, 5, VAR_2, VAR_3 - VAR_2);
}
