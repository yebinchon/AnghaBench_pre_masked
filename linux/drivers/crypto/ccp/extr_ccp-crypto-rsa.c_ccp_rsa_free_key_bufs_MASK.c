
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ d_len; int * d_buf; scalar_t__ n_len; int * n_buf; scalar_t__ e_len; int * e_buf; } ;
struct TYPE_3__ {TYPE_2__ rsa; } ;
struct ccp_ctx {TYPE_1__ u; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ccp_ctx *VAR_0)
{

 FUNC_0(VAR_0->u.rsa.e_buf);
 VAR_0->u.rsa.e_buf = ((void*)0);
 VAR_0->u.rsa.e_len = 0;
 FUNC_0(VAR_0->u.rsa.n_buf);
 VAR_0->u.rsa.n_buf = ((void*)0);
 VAR_0->u.rsa.n_len = 0;
 FUNC_0(VAR_0->u.rsa.d_buf);
 VAR_0->u.rsa.d_buf = ((void*)0);
 VAR_0->u.rsa.d_len = 0;
}
