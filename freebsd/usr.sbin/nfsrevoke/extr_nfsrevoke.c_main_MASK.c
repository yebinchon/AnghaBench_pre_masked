
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nfsd_clid {int* nclid_id; int nclid_idlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,struct nfsd_clid*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_2, char **VAR_3)
{
 char *VAR_4;
 u_char VAR_5;
 int VAR_6, VAR_7;
 struct nfsd_clid VAR_8;

 if (FUNC_2("nfsd") < 0)
  FUNC_1(1, "nfsd not loaded - self terminating");
 if (VAR_2 != 2)
  FUNC_6();
 VAR_6 = 0;
 VAR_4 = VAR_3[1];
 if (FUNC_5(VAR_4) % 2)
  VAR_7 = 0;
 else
  VAR_7 = 1;
 VAR_5 = 0;
 while (*VAR_4) {
  if (*VAR_4 >= '0' && *VAR_4 <= '9')
   VAR_5 += (u_char)(*VAR_4 - '0');
  else if (*VAR_4 >= 'A' && *VAR_4 <= 'F')
   VAR_5 += ((u_char)(*VAR_4 - 'A')) + 0xa;
  else if (*VAR_4 >= 'a' && *VAR_4 <= 'f')
   VAR_5 += ((u_char)(*VAR_4 - 'a')) + 0xa;
  else
   FUNC_1(1, "Non hexadecimal digit in %s", VAR_3[1]);
  if (VAR_7) {
   VAR_5 <<= 4;
   VAR_7 = 0;
  } else {
   VAR_8.nclid_id[VAR_6++] = VAR_5;
   if (VAR_6 > VAR_1)
    FUNC_1(1, "Clientid %s, loo long", VAR_3[1]);
   VAR_5 = 0;
   VAR_7 = 1;
  }
  VAR_4++;
 }




 VAR_8.nclid_idlen = VAR_6;






 if (FUNC_3(VAR_0, &VAR_8) < 0)
  FUNC_0(1, "Admin revoke failed");

}
