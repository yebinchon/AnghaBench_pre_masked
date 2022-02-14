
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {int dummy; } ;
struct aoedev {int flags; int ntargets; int lock; int sysminor; int bufpool; struct aoetgt** targets; int blkq; int tag_set; scalar_t__ gd; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aoedev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct aoedev*,struct aoetgt*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct aoedev*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_12(struct aoedev *VAR_3)
{
 struct aoetgt **VAR_4, **VAR_5;
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_10(&VAR_3->lock, VAR_7);
 if (VAR_3->flags & VAR_2
 && !(VAR_3->flags & VAR_1)) {
  VAR_3->flags |= VAR_1;
  VAR_6 = 1;
 }
 FUNC_11(&VAR_3->lock, VAR_7);
 if (!VAR_6)
  return;

 FUNC_4(&VAR_3->timer);
 if (VAR_3->gd) {
  FUNC_0(VAR_3);
  FUNC_3(VAR_3->gd);
  FUNC_8(VAR_3->gd);
  FUNC_2(&VAR_3->tag_set);
  FUNC_1(VAR_3->blkq);
 }
 VAR_4 = VAR_3->targets;
 VAR_5 = VAR_4 + VAR_3->ntargets;
 for (; VAR_4 < VAR_5 && *VAR_4; VAR_4++)
  FUNC_5(VAR_3, *VAR_4);

 FUNC_6(VAR_3->bufpool);
 FUNC_9(VAR_3);
 FUNC_7(VAR_3->sysminor);

 FUNC_10(&VAR_3->lock, VAR_7);
 VAR_3->flags |= VAR_0;
 FUNC_11(&VAR_3->lock, VAR_7);
}
