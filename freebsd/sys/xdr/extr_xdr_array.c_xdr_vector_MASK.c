
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xdrproc_t ) (int *,char*) ;
typedef scalar_t__ u_int ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

bool_t
FUNC_1(XDR *VAR_2, char *VAR_3, u_int VAR_4, u_int VAR_5,
    xdrproc_t VAR_6)
{
 u_int VAR_7;
 char *VAR_8;

 VAR_8 = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (!(*VAR_6)(VAR_2, VAR_8)) {
   return(VAR_0);
  }
  VAR_8 += VAR_5;
 }
 return(VAR_1);
}
