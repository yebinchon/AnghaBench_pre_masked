
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sf_buf {int dummy; } ;
struct dmar_ctx {int rid; TYPE_2__* domain; } ;
typedef int dmar_ctx_entry_t ;
struct TYPE_4__ {TYPE_1__* dmar; } ;
struct TYPE_3__ {int ctx_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int ,scalar_t__,int,struct sf_buf**) ;

__attribute__((used)) static dmar_ctx_entry_t *
FUNC_2(struct dmar_ctx *VAR_2, struct sf_buf **VAR_3)
{
 dmar_ctx_entry_t *VAR_4;

 VAR_4 = FUNC_1(VAR_2->domain->dmar->ctx_obj, 1 +
     FUNC_0(VAR_2->rid), VAR_0 | VAR_1, VAR_3);
 VAR_4 += VAR_2->rid & 0xff;
 return (VAR_4);
}
