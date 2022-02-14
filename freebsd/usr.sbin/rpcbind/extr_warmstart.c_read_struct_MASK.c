
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* xdrproc_t ) (int *,void*) ;
struct stat {scalar_t__ st_uid; int st_mode; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static bool_t
FUNC_6(char *VAR_6, xdrproc_t VAR_7, void *VAR_8)
{
 FILE *VAR_9;
 XDR VAR_10;
 struct stat VAR_11;

 if (FUNC_4(VAR_6, &VAR_11) != 0) {
  FUNC_3(VAR_5,
  "rpcbind: cannot stat file = %s for reading\n", VAR_6);
  goto error;
 }
 if ((VAR_11.st_uid != 0) || (VAR_11.st_mode & VAR_1) ||
     (VAR_11.st_mode & VAR_2)) {
  FUNC_3(VAR_5,
  "rpcbind: invalid permissions on file = %s for reading\n",
   VAR_6);
  goto error;
 }
 VAR_9 = FUNC_2(VAR_6, "r");
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_5,
  "rpcbind: cannot open file = %s for reading\n", VAR_6);
  goto error;
 }
 FUNC_5(&VAR_10, VAR_9, VAR_4);

 if (VAR_7(&VAR_10, VAR_8) == VAR_0) {
  FUNC_3(VAR_5, "rpcbind: xdr_%s: failed\n", VAR_6);
  FUNC_1(VAR_9);
  goto error;
 }
 FUNC_0(&VAR_10);
 FUNC_1(VAR_9);
 return (VAR_3);

error: FUNC_3(VAR_5, "rpcbind: will start from scratch\n");
 return (VAR_0);
}
