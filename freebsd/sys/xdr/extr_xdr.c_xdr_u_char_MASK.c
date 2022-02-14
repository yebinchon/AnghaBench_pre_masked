
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

bool_t
FUNC_1(XDR *VAR_2, u_char *VAR_3)
{
 u_int VAR_4;

 VAR_4 = (*VAR_3);
 if (!FUNC_0(VAR_2, &VAR_4)) {
  return (VAR_0);
 }
 *VAR_3 = VAR_4;
 return (VAR_1);
}
