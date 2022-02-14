
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netconfig {int dummy; } ;
struct netbuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ cf_stat; } ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 struct netconfig* FUNC_1 (void*) ;
 void* FUNC_2 (char const*) ;
 int * FUNC_3 (char*,struct netconfig*,int,struct netbuf**) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static CLIENT *
FUNC_4(char *VAR_3, int VAR_4, struct netbuf **VAR_5)
{
 static const char *VAR_6[3] = {
  "circuit_n", "circuit_v", "datagram_v"
 };
 int VAR_7;
 struct netconfig *VAR_8;
 CLIENT *VAR_9 = ((void*)0);
 void *VAR_10;

 VAR_2.cf_stat = VAR_0;
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if ((VAR_10 = FUNC_2(VAR_6[VAR_7])) == ((void*)0))
   continue;
  while (VAR_9 == (CLIENT *)((void*)0)) {
   if ((VAR_8 = FUNC_1(VAR_10)) == ((void*)0)) {
    if (VAR_2.cf_stat == VAR_0)
        VAR_2.cf_stat = VAR_1;
    break;
   }
   VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_4,
     VAR_5);
  }
  if (VAR_9)
   break;
  FUNC_0(VAR_10);
 }
 return (VAR_9);
}
