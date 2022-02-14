
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* xdrproc_t ) (int *,void*) ;
typedef int mode_t ;
typedef scalar_t__ bool_t ;
typedef int XDR ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static bool_t
FUNC_7(char *VAR_4, xdrproc_t VAR_5, void *VAR_6)
{
 FILE *VAR_7;
 XDR VAR_8;
 mode_t VAR_9;

 VAR_9 = FUNC_5(077);
 VAR_7 = FUNC_3(VAR_4, "w");
 if (VAR_7 == ((void*)0)) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 10; VAR_10++)
   FUNC_1(VAR_10);
  VAR_7 = FUNC_3(VAR_4, "w");
  if (VAR_7 == ((void*)0)) {
   FUNC_4(VAR_1,
    "cannot open file = %s for writing", VAR_4);
   FUNC_4(VAR_1, "cannot save any registration");
   return (VAR_0);
  }
 }
 (void) FUNC_5(VAR_9);
 FUNC_6(&VAR_8, VAR_7, VAR_3);

 if (VAR_5(&VAR_8, VAR_6) == VAR_0) {
  FUNC_4(VAR_1, "rpcbind: xdr_%s: failed", VAR_4);
  FUNC_2(VAR_7);
  return (VAR_0);
 }
 FUNC_0(&VAR_8);
 FUNC_2(VAR_7);
 return (VAR_2);
}
