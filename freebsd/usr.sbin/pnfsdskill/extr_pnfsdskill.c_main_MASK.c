
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_pnfsd_args {char* dspath; int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,char**,char*,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,struct nfsd_pnfsd_args*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_5, char *VAR_6[])
{
 struct nfsd_pnfsd_args VAR_7;
 int VAR_8, VAR_9;

 if (FUNC_2() != 0)
  FUNC_1(1, "Must be run as root/su");
 VAR_9 = 0;
 while ((VAR_8 = FUNC_3(VAR_5, VAR_6, "f", VAR_3, ((void*)0))) != -1) {
  switch (VAR_8) {
  case 'f':
   VAR_9 = 1;
   break;
  default:
   FUNC_5();
  }
 }
 VAR_5 -= VAR_4;
 VAR_6 += VAR_4;
 if (VAR_5 != 1)
  FUNC_5();

 if (VAR_9 != 0)
  VAR_7.op = VAR_2;
 else
  VAR_7.op = VAR_1;
 VAR_7.dspath = *VAR_6;
 if (FUNC_4(VAR_0, &VAR_7) < 0)
  FUNC_0(1, "Can't kill %s", *VAR_6);
}
