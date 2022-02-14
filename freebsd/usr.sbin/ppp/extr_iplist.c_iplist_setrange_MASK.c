
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_2__ {void* lstart; int nItems; char* srcptr; scalar_t__ srcitem; struct in_addr ip; } ;
struct iplist {TYPE_1__ cur; } ;


 int FUNC_0 (char*,char*,struct in_addr*) ;
 int FUNC_1 (char*,struct in_addr*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct iplist *VAR_0, char *VAR_1)
{
  char *VAR_2, *VAR_3;

  if ((VAR_2 = FUNC_4(VAR_1, ",-")) == ((void*)0)) {
    if (!FUNC_1(VAR_1, &VAR_0->cur.ip))
      return 0;
    VAR_0->cur.lstart = FUNC_2(VAR_0->cur.ip.s_addr);
    VAR_0->cur.nItems = 1;
  } else {
    if (!FUNC_0(VAR_1, VAR_2, &VAR_0->cur.ip))
      return 0;
    if (*VAR_2 == ',') {
      VAR_0->cur.lstart = FUNC_2(VAR_0->cur.ip.s_addr);
      VAR_0->cur.nItems = 1;
    } else {
      struct in_addr VAR_4;

      VAR_3 = VAR_2+1;
      if ((VAR_2 = FUNC_4(VAR_3, ",-")) == ((void*)0))
        VAR_2 = VAR_3 + FUNC_3(VAR_3);
      if (*VAR_3 == '-')
        return 0;
      if (!FUNC_0(VAR_3, VAR_2, &VAR_4))
        return 0;
      VAR_0->cur.lstart = FUNC_2(VAR_0->cur.ip.s_addr);
      VAR_0->cur.nItems = FUNC_2(VAR_4.s_addr) - VAR_0->cur.lstart + 1;
      if (VAR_0->cur.nItems < 1)
        return 0;
    }
  }
  VAR_0->cur.srcitem = 0;
  VAR_0->cur.srcptr = VAR_1;
  return 1;
}
