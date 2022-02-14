
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {scalar_t__ refs; scalar_t__ ctx_cnt; int dmar; } ;
struct dmar_ctx {struct dmar_domain* domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct dmar_ctx*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct dmar_ctx *VAR_1)
{
 struct dmar_domain *VAR_2;

 VAR_2 = VAR_1->domain;
 FUNC_0(VAR_2->dmar);
 FUNC_1(VAR_2->refs > 0,
     ("domain %p ctx dtr refs %d", VAR_2, VAR_2->refs));
 FUNC_1(VAR_2->ctx_cnt >= VAR_2->refs,
     ("domain %p ctx dtr refs %d ctx_cnt %d", VAR_2,
     VAR_2->refs, VAR_2->ctx_cnt));
 VAR_2->refs--;
 VAR_2->ctx_cnt--;
 FUNC_2(VAR_1, VAR_0);
}
