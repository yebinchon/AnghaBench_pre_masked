
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ypxfrstat ;
struct jobs {unsigned long tid; int polled; int prognum; int server; int map; struct jobs* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,unsigned long,...) ;
 struct jobs* VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(ypxfrstat VAR_5, unsigned long VAR_6)
{
 struct jobs *VAR_7;

 VAR_7 = VAR_3;

 while (VAR_7 != ((void*)0)) {
  if (VAR_7->tid == VAR_6)
   break;
  VAR_7 = VAR_7->next;
 }

 if (VAR_7 == ((void*)0)) {
  FUNC_1("warning: received callback with invalid transaction ID: %lu",
    VAR_6);
  return (0);
 }

 if (VAR_7->polled) {
  FUNC_1("warning: received callback with duplicate transaction ID: %lu",
    VAR_6);
  return (0);
 }

 if (VAR_2 > 1) {
  FUNC_1("checking return status: transaction ID: %lu",
        VAR_7->tid);
 }

 if (VAR_5 != VAR_1 || VAR_2) {
  FUNC_1("transfer of map %s to server %s %s",
    VAR_7->map, VAR_7->server, VAR_5 == VAR_1 ?
    "succeeded" : "failed");
  FUNC_1("status returned by ypxfr: %s", VAR_5 > VAR_0 ?
   FUNC_2(VAR_5) :
   FUNC_3(VAR_5));
 }

 VAR_7->polled = 1;

 FUNC_0(VAR_7->prognum, 1);

 VAR_4--;
 return(0);
}
