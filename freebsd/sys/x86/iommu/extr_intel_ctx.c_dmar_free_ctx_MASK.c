
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_unit {int dummy; } ;
struct dmar_ctx {TYPE_1__* domain; } ;
struct TYPE_2__ {struct dmar_unit* dmar; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*,struct dmar_ctx*) ;

void
FUNC_2(struct dmar_ctx *VAR_0)
{
 struct dmar_unit *VAR_1;

 VAR_1 = VAR_0->domain->dmar;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0);
}
