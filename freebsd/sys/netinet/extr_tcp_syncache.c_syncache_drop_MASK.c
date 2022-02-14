
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toedev {int (* tod_syncache_removed ) (struct toedev*,int ) ;} ;
struct syncache_head {int sch_length; int sch_bucket; } ;
struct syncache {int sc_todctx; struct toedev* sc_tod; } ;


 scalar_t__ FUNC_0 (struct syncache*) ;
 int FUNC_1 (struct syncache_head*) ;
 int FUNC_2 (int *,struct syncache*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct toedev*,int ) ;
 int FUNC_5 (struct syncache*) ;

__attribute__((used)) static void
FUNC_6(struct syncache *VAR_2, struct syncache_head *VAR_3)
{

 FUNC_1(VAR_3);

 FUNC_3(VAR_0);
 FUNC_2(&VAR_3->sch_bucket, VAR_2, VAR_1);
 VAR_3->sch_length--;
 FUNC_5(VAR_2);
}
