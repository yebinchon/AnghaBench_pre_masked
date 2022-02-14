
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,char const*,int) ;
 int FUNC_3 (char const*,char*,int) ;

int FUNC_4 (int VAR_2, const char *VAR_3, int VAR_4) {
  if (VAR_2 != VAR_1) {
    return 0;
  }

  int VAR_5 = FUNC_1 (VAR_3, VAR_4);
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;

  FUNC_0 (VAR_0);

  return (VAR_4 >= 7 && !FUNC_3 (VAR_3, "searchx", 7)) || (VAR_4 >= 7 && !FUNC_3 (VAR_3, "searchu", 7)) || FUNC_2 (VAR_2, VAR_3, VAR_4);
}
