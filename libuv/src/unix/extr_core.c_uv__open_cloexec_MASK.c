
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(const char* VAR_2, int VAR_3) {
  int VAR_4;
  int VAR_5;

  VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5 == -1)
    return FUNC_0(VAR_1);

  VAR_4 = FUNC_2(VAR_5, 1);
  if (VAR_4) {
    FUNC_3(VAR_5);
    return VAR_4;
  }

  return VAR_5;

}
