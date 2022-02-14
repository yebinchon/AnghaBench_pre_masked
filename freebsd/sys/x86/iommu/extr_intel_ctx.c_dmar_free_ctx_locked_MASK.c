
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sf_buf {int dummy; } ;
struct dmar_unit {int hw_ecap; scalar_t__ qi_enabled; } ;
struct dmar_domain {int dummy; } ;
struct dmar_ctx {int refs; int flags; struct dmar_domain* domain; } ;
struct TYPE_4__ {scalar_t__ ctx2; int ctx1; } ;
typedef TYPE_1__ dmar_ctx_entry_t ;


 int FUNC_0 (struct dmar_unit*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct dmar_ctx*) ;
 int FUNC_5 (struct dmar_unit*,TYPE_1__*) ;
 int FUNC_6 (struct dmar_unit*) ;
 int FUNC_7 (struct dmar_unit*) ;
 TYPE_1__* FUNC_8 (struct dmar_ctx*,struct sf_buf**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct dmar_unit*) ;
 int FUNC_11 (struct sf_buf*) ;
 int FUNC_12 (struct dmar_unit*,struct dmar_domain*) ;
 int FUNC_13 (struct dmar_ctx*,int ) ;

void
FUNC_14(struct dmar_unit *VAR_5, struct dmar_ctx *VAR_6)
{
 struct sf_buf *VAR_7;
 dmar_ctx_entry_t *VAR_8;
 struct dmar_domain *VAR_9;

 FUNC_0(VAR_5);
 FUNC_3(VAR_6->refs >= 1,
     ("dmar %p ctx %p refs %u", VAR_5, VAR_6, VAR_6->refs));





 if (VAR_6->refs > 1) {
  VAR_6->refs--;
  FUNC_2(VAR_5);
  return;
 }

 FUNC_3((VAR_6->flags & VAR_0) == 0,
     ("lost ref on disabled ctx %p", VAR_6));






 FUNC_2(VAR_5);
 VAR_4;
 VAR_8 = FUNC_8(VAR_6, &VAR_7);
 FUNC_1(VAR_5);
 FUNC_3(VAR_6->refs >= 1,
     ("dmar %p ctx %p refs %u", VAR_5, VAR_6, VAR_6->refs));





 if (VAR_6->refs > 1) {
  VAR_6->refs--;
  FUNC_2(VAR_5);
  FUNC_11(VAR_7);
  VAR_3;
  return;
 }

 FUNC_3((VAR_6->flags & VAR_0) == 0,
     ("lost ref on disabled ctx %p", VAR_6));





 FUNC_9(&VAR_8->ctx1);
 VAR_8->ctx2 = 0;
 FUNC_5(VAR_5, VAR_8);
 FUNC_6(VAR_5);
 if ((VAR_5->hw_ecap & VAR_1) != 0) {
  if (VAR_5->qi_enabled)
   FUNC_10(VAR_5);
  else
   FUNC_7(VAR_5);
 }
 FUNC_11(VAR_7);
 VAR_9 = VAR_6->domain;
 FUNC_4(VAR_6);
 FUNC_13(VAR_6, VAR_2);
 FUNC_12(VAR_5, VAR_9);
 VAR_3;
}
