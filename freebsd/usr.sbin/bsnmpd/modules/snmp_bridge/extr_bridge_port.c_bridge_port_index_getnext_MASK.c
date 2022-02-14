
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct bridge_port {scalar_t__ status; } ;
struct bridge_if {int dummy; } ;
struct asn_oid {scalar_t__ len; int* subs; } ;
typedef int int8_t ;
typedef char int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct bridge_if* FUNC_0 (char*) ;
 struct bridge_port* FUNC_1 (char,struct bridge_if*) ;
 struct bridge_port* FUNC_2 () ;
 struct bridge_port* FUNC_3 (struct bridge_port*) ;

__attribute__((used)) static struct bridge_port *
FUNC_4(const struct asn_oid *VAR_2, uint VAR_3, int8_t VAR_4)
{
 uint VAR_5;
 int32_t VAR_6;
 char VAR_7[VAR_0];
 struct bridge_if *VAR_8;
 struct bridge_port *VAR_9;

 if (VAR_2->len - VAR_3 == 0)
  VAR_9 = FUNC_2();
 else {
  if (VAR_2->len - VAR_3 != VAR_2->subs[VAR_3] + 2 ||
      VAR_2->subs[VAR_3] >= VAR_0)
   return (((void*)0));

  for (VAR_5 = 0; VAR_5 < VAR_2->subs[VAR_3]; VAR_5++)
   VAR_7[VAR_5] = VAR_2->subs[VAR_3 + VAR_5 + 1];
  VAR_7[VAR_5] = '\0';

  VAR_6 = VAR_2->subs[VAR_3 + VAR_5 + 1];

  if ((VAR_8 = FUNC_0(VAR_7)) == ((void*)0) ||
      (VAR_9 = FUNC_1(VAR_6, VAR_8)) == ((void*)0))
   return (((void*)0));

  VAR_9 = FUNC_3(VAR_9);
 }

 if (VAR_4 == 1)
  return (VAR_9);

 while (VAR_9 != ((void*)0)) {
  if (VAR_9->status == VAR_1)
   break;
  VAR_9 = FUNC_3(VAR_9);
 }

 return (VAR_9);
}
