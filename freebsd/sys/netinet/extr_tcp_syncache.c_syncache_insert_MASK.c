
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toedev {int (* tod_syncache_added ) (struct toedev*,int ) ;} ;
struct syncache_head {int sch_length; scalar_t__ sch_nextc; int sch_bucket; int sch_last_overflow; } ;
struct syncache {int sc_todctx; struct toedev* sc_tod; int sc_inc; } ;
struct TYPE_2__ {int bucket_limit; } ;


 scalar_t__ FUNC_0 (struct syncache*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct syncache_head*) ;
 int FUNC_3 (struct syncache_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct syncache*,int ) ;
 struct syncache* FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (struct toedev*,int ) ;
 int FUNC_10 (struct syncache*,struct syncache_head*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct syncache*,struct syncache_head*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_13(struct syncache *VAR_8, struct syncache_head *VAR_9)
{
 struct syncache *VAR_10;

 FUNC_2(VAR_9);





 if (VAR_9->sch_length >= VAR_2.bucket_limit) {
  FUNC_1(!FUNC_4(&VAR_9->sch_bucket),
   ("sch->sch_length incorrect"));
  FUNC_11(&VAR_8->sc_inc);
  VAR_10 = FUNC_6(&VAR_9->sch_bucket, VAR_4);
  VAR_9->sch_last_overflow = VAR_7;
  FUNC_10(VAR_10, VAR_9);
 }


 FUNC_5(&VAR_9->sch_bucket, VAR_8, VAR_3);
 VAR_9->sch_length++;
 if (VAR_9->sch_length == 1)
  VAR_9->sch_nextc = VAR_6 + VAR_0;
 FUNC_12(VAR_8, VAR_9, 1);

 FUNC_3(VAR_9);

 FUNC_7(VAR_1);
 FUNC_8(VAR_5);
}
