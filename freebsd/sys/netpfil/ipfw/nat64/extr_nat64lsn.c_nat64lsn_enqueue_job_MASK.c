
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nat64lsn_job_item {int dummy; } ;
struct TYPE_2__ {int stats; } ;
struct nat64lsn_cfg {int jcallout; int jlen; TYPE_1__ base; int jhead; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct nat64lsn_job_item*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ,struct nat64lsn_cfg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct nat64lsn_cfg *VAR_3, struct nat64lsn_job_item *VAR_4)
{

 FUNC_0();
 FUNC_3(&VAR_3->jhead, VAR_4, VAR_0);
 FUNC_2(&VAR_3->base.stats, VAR_1);
 VAR_3->jlen++;

 if (FUNC_4(&VAR_3->jcallout) == 0)
  FUNC_5(&VAR_3->jcallout, 1, VAR_2, VAR_3);
 FUNC_1();
}
