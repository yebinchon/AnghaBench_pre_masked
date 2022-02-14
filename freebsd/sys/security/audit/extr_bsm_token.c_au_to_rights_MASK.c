
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int token_t ;
struct TYPE_3__ {int * cr_rights; } ;
typedef TYPE_1__ cap_rights_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;

token_t *
FUNC_4(cap_rights_t *VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3;
 int VAR_4;

 FUNC_2(VAR_2, VAR_3, sizeof(u_char) + sizeof(*VAR_1));

 FUNC_0(VAR_3, VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_1->cr_rights); VAR_4++)
  FUNC_1(VAR_3, VAR_1->cr_rights[VAR_4]);

 return (VAR_2);
}
