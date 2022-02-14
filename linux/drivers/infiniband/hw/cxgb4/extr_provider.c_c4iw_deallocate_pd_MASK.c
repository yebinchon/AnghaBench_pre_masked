
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct c4iw_pd {int pdid; struct c4iw_dev* rhp; } ;
struct TYPE_6__ {int cur; } ;
struct TYPE_7__ {int lock; TYPE_2__ pd; } ;
struct TYPE_5__ {int pdid_table; } ;
struct TYPE_8__ {TYPE_3__ stats; TYPE_1__ resource; } ;
struct c4iw_dev {TYPE_4__ rdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct ib_pd*,int ) ;
 struct c4iw_pd* FUNC_4 (struct ib_pd*) ;

__attribute__((used)) static void FUNC_5(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct c4iw_dev *VAR_2;
 struct c4iw_pd *VAR_3;

 VAR_3 = FUNC_4(VAR_0);
 VAR_2 = VAR_3->rhp;
 FUNC_3("ibpd %p pdid 0x%x\n", VAR_0, VAR_3->pdid);
 FUNC_0(&VAR_2->rdev.resource.pdid_table, VAR_3->pdid);
 FUNC_1(&VAR_2->rdev.stats.lock);
 VAR_2->rdev.stats.pd.cur--;
 FUNC_2(&VAR_2->rdev.stats.lock);
}
