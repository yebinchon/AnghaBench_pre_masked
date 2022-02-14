
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_domain {scalar_t__ ctx_cnt; scalar_t__ refs; int flags; int domain; TYPE_1__* dmar; int lock; int * pgtbl_obj; int contexts; int unload_entries; } ;
struct TYPE_2__ {int domids; } ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_1 ;
 int FUNC_2 (struct dmar_domain*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dmar_domain*) ;
 int FUNC_7 (struct dmar_domain*) ;
 int FUNC_8 (struct dmar_domain*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct dmar_domain *VAR_3)
{

 FUNC_3(FUNC_5(&VAR_3->unload_entries),
     ("unfinished unloads %p", VAR_3));
 FUNC_3(FUNC_4(&VAR_3->contexts),
     ("destroying dom %p with contexts", VAR_3));
 FUNC_3(VAR_3->ctx_cnt == 0,
     ("destroying dom %p with ctx_cnt %d", VAR_3, VAR_3->ctx_cnt));
 FUNC_3(VAR_3->refs == 0,
     ("destroying dom %p with refs %d", VAR_3, VAR_3->refs));
 if ((VAR_3->flags & VAR_0) != 0) {
  FUNC_0(VAR_3);
  FUNC_6(VAR_3);
  FUNC_2(VAR_3);
 }
 if ((VAR_3->flags & VAR_1) != 0) {
  if (VAR_3->pgtbl_obj != ((void*)0))
   FUNC_1(VAR_3);
  FUNC_7(VAR_3);
 }
 FUNC_10(&VAR_3->lock);
 FUNC_9(VAR_3->dmar->domids, VAR_3->domain);
 FUNC_8(VAR_3, VAR_2);
}
