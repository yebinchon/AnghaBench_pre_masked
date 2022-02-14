
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opaque_auth {int oa_length; int oa_base; int oa_flavor; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_2, struct opaque_auth *VAR_3)
{

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 if (FUNC_2(VAR_2, &(VAR_3->oa_flavor)))
  return (FUNC_1(VAR_2, &VAR_3->oa_base,
   &VAR_3->oa_length, VAR_1));
 return (VAR_0);
}
