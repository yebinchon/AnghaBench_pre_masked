
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {void* s_addr; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; int h_addr; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 struct hostent* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,struct in_addr*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (struct in_addr*,int ,int ) ;
 int FUNC_4 (char const*,char*) ;
 int * FUNC_5 (char*,char const) ;

struct in_addr
FUNC_6(const char *VAR_3)
{
  struct in_addr VAR_4;

  if (!FUNC_4(VAR_3, "default"))
    VAR_4.s_addr = VAR_1;
  else if (FUNC_1(VAR_3, &VAR_4) == 0) {
    const char *VAR_5;


    for (VAR_5 = VAR_3; *VAR_5 != '\0'; VAR_5++)
      if (!FUNC_2(*VAR_5) && FUNC_5("-.", *VAR_5) == ((void*)0))
        break;

    if (*VAR_5 == '\0') {
      struct hostent *VAR_6;

      VAR_6 = FUNC_0(VAR_3);
      if (VAR_6 && VAR_6->h_addrtype == VAR_0)
        FUNC_3(&VAR_4, VAR_6->h_addr, VAR_6->h_length);
      else
        VAR_4.s_addr = VAR_2;
    } else
      VAR_4.s_addr = VAR_2;
  }

  return VAR_4;
}
