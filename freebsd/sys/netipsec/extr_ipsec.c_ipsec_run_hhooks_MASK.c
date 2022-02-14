
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipsec_ctx_data {int af; int ** mp; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ipsec_ctx_data*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

int
FUNC_1(struct ipsec_ctx_data *VAR_7, int VAR_8)
{
 int VAR_9;

 switch (VAR_7->af) {
 default:
  return (VAR_1);
 }
 if (VAR_8 == VAR_4)
  FUNC_0(VAR_5[VAR_9], VAR_7, ((void*)0));
 else
  FUNC_0(VAR_6[VAR_9], VAR_7, ((void*)0));
 if (*VAR_7->mp == ((void*)0))
  return (VAR_0);
 return (0);
}
