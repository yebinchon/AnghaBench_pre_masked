
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_page_t ;
struct dmar_unit {int hw_ecap; int unit; } ;
struct dmar_domain {int awlvl; int flags; int * pgtbl_obj; int domain; struct dmar_unit* dmar; } ;
struct TYPE_5__ {int owner; } ;
struct dmar_ctx {TYPE_1__ ctx_tag; struct dmar_domain* domain; } ;
struct TYPE_6__ {scalar_t__ ctx1; scalar_t__ ctx2; } ;
typedef TYPE_2__ dmar_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dmar_unit*,TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct dmar_ctx *VAR_7, dmar_ctx_entry_t *VAR_8, bool VAR_9)
{
 struct dmar_unit *VAR_10;
 struct dmar_domain *VAR_11;
 vm_page_t VAR_12;

 VAR_11 = VAR_7->domain;
 VAR_10 = VAR_11->dmar;
 FUNC_1(VAR_9 || (VAR_8->ctx1 == 0 && VAR_8->ctx2 == 0),
     ("dmar%d: initialized ctx entry %d:%d:%d 0x%jx 0x%jx",
     VAR_10->unit, FUNC_6(VAR_7->ctx_tag.owner),
     FUNC_8(VAR_7->ctx_tag.owner),
     FUNC_7(VAR_7->ctx_tag.owner),
     VAR_8->ctx1, VAR_8->ctx2));
 FUNC_5(&VAR_8->ctx2, FUNC_0(VAR_11->domain) |
     VAR_11->awlvl);
 if ((VAR_11->flags & VAR_4) != 0 &&
     (VAR_10->hw_ecap & VAR_5) != 0) {
  FUNC_1(VAR_11->pgtbl_obj == ((void*)0),
      ("ctx %p non-null pgtbl_obj", VAR_7));
  FUNC_5(&VAR_8->ctx1, VAR_2 | VAR_1);
 } else {
  VAR_12 = FUNC_4(VAR_11->pgtbl_obj, 0, VAR_6);
  FUNC_5(&VAR_8->ctx1, VAR_3 |
      (VAR_0 & FUNC_2(VAR_12)) |
      VAR_1);
 }
 FUNC_3(VAR_10, VAR_8);
}
