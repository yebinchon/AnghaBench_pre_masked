
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {char* h_name; } ;
struct host {int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct host* FUNC_0 (int *,char const*,int,int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 struct hostent* FUNC_2 (char const*,int ) ;
 struct hostent VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

struct hostent *FUNC_8 (const char *VAR_5) {
  if (!VAR_4) {
    FUNC_4 ();
  }

  int VAR_6 = FUNC_7 (VAR_5);


  if (VAR_5[0] == '[' && VAR_5[VAR_6-1] == ']' && VAR_6 <= 64) {






    char VAR_7[64];
    FUNC_5 (VAR_7, VAR_5 + 1, VAR_6 - 2);
    VAR_7[VAR_6 - 2] = 0;
    return FUNC_2 (VAR_7, VAR_0);
  }


  if (VAR_4 <= 0) {
    return FUNC_1 (VAR_5) ?: FUNC_2 (VAR_5, VAR_0);
  }

  if (VAR_6 >= 128) {
    return FUNC_1 (VAR_5) ?: FUNC_2 (VAR_5, VAR_0);
  }

  struct host *VAR_8 = FUNC_0 (&VAR_1, VAR_5, VAR_6, 0);

  if (!VAR_8) {
    if (FUNC_6 (VAR_5, '.') || FUNC_6 (VAR_5, ':')) {
      return FUNC_1 (VAR_5) ?: FUNC_2 (VAR_5, VAR_0);
    } else {
      return 0;
    }
  }

  VAR_2.h_name = (char *)VAR_5;
  VAR_3 = FUNC_3 (VAR_8->ip);
  return &VAR_2;
}
