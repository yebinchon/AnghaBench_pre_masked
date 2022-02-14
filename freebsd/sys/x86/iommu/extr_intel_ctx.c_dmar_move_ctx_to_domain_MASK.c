
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buf {int dummy; } ;
struct dmar_unit {int unit; } ;
struct dmar_domain {int domain; int flags; struct dmar_unit* dmar; } ;
struct dmar_ctx {int rid; struct dmar_domain* domain; } ;
typedef int dmar_ctx_entry_t ;


 int VAR_0 ;
 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dmar_ctx*,int *,int) ;
 int FUNC_3 (struct dmar_ctx*) ;
 int FUNC_4 (struct dmar_ctx*) ;
 int FUNC_5 (struct dmar_unit*,int) ;
 int * FUNC_6 (struct dmar_ctx*,struct sf_buf**) ;
 int FUNC_7 (struct sf_buf*) ;
 int FUNC_8 (struct dmar_unit*,struct dmar_domain*) ;
 int FUNC_9 (char*,int,int,int,int,char*) ;

int
FUNC_10(struct dmar_domain *VAR_3, struct dmar_ctx *VAR_4)
{
 struct dmar_unit *VAR_5;
 struct dmar_domain *VAR_6;
 dmar_ctx_entry_t *VAR_7;
 struct sf_buf *VAR_8;
 int VAR_9;

 VAR_5 = VAR_3->dmar;
 VAR_6 = VAR_4->domain;
 if (VAR_3 == VAR_6)
  return (0);
 FUNC_1(VAR_6->dmar == VAR_5,
     ("domain %p %u moving between dmars %u %u", VAR_3,
     VAR_3->domain, VAR_6->dmar->unit, VAR_3->dmar->unit));
 VAR_2;

 VAR_7 = FUNC_6(VAR_4, &VAR_8);
 FUNC_0(VAR_5);
 FUNC_4(VAR_4);
 VAR_4->domain = VAR_3;
 FUNC_3(VAR_4);
 FUNC_2(VAR_4, VAR_7, 1);
 FUNC_7(VAR_8);
 VAR_9 = FUNC_5(VAR_5, 1);

 FUNC_9("dmar%d rid %x domain %d->%d %s-mapped\n",
     VAR_5->unit, VAR_4->rid, VAR_6->domain, VAR_3->domain,
     (VAR_3->flags & VAR_0) != 0 ? "id" : "re");
 FUNC_8(VAR_5, VAR_6);
 VAR_1;
 return (VAR_9);
}
