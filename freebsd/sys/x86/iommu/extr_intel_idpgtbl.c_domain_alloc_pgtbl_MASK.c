
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct dmar_domain {int dmar; int flags; int * pgtbl_obj; int pglvl; } ;
struct TYPE_3__ {int ref_count; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int FUNC_1 (struct dmar_domain*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,int *,int ,int ,int ,int *) ;

int
FUNC_9(struct dmar_domain *VAR_5)
{
 vm_page_t VAR_6;

 FUNC_5(VAR_5->pgtbl_obj == ((void*)0),
     ("already initialized %p", VAR_5));

 VAR_5->pgtbl_obj = FUNC_8(VAR_4, ((void*)0),
     FUNC_4(FUNC_7(VAR_5->pglvl)), 0, 0, ((void*)0));
 FUNC_0(VAR_5);
 VAR_6 = FUNC_6(VAR_5->pgtbl_obj, 0, VAR_2 |
     VAR_3 | VAR_1);

 VAR_6->ref_count = 1;
 FUNC_1(VAR_5);
 FUNC_2(VAR_5->dmar);
 VAR_5->flags |= VAR_0;
 FUNC_3(VAR_5->dmar);
 return (0);
}
