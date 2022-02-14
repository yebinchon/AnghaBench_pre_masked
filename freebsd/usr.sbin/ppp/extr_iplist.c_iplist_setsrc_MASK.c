
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* srcptr; scalar_t__ nItems; } ;
struct iplist {char* src; TYPE_1__ cur; int nItems; } ;


 scalar_t__ FUNC_0 (struct iplist*) ;
 int FUNC_1 (char*,char const*,int) ;

int
FUNC_2(struct iplist *VAR_0, const char *VAR_1)
{
  FUNC_1(VAR_0->src, VAR_1, sizeof VAR_0->src - 1);
  VAR_0->src[sizeof VAR_0->src - 1] = '\0';
  VAR_0->cur.srcptr = VAR_0->src;
  do {
    if (FUNC_0(VAR_0))
      VAR_0->nItems += VAR_0->cur.nItems;
    else
      return 0;
  } while (VAR_0->cur.srcptr != VAR_0->src);
  return 1;
}
