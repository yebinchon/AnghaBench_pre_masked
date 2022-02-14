
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nat64lsn_job_item {int jtype; scalar_t__ done; } ;
struct TYPE_2__ {int stats; } ;
struct nat64lsn_cfg {scalar_t__ jlen; scalar_t__ jmaxlen; TYPE_1__ base; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nat64lsn_job_item* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct nat64lsn_job_item *
FUNC_3(struct nat64lsn_cfg *VAR_6, int VAR_7)
{
 struct nat64lsn_job_item *VAR_8;





 VAR_8 = ((void*)0);
 if (VAR_6->jlen >= VAR_6->jmaxlen)
  FUNC_1(&VAR_6->base.stats, VAR_3);
 else {
  VAR_8 = FUNC_2(VAR_5, VAR_1);
  if (VAR_8 == ((void*)0))
   FUNC_1(&VAR_6->base.stats, VAR_4);
 }
 if (VAR_8 == ((void*)0)) {
  FUNC_1(&VAR_6->base.stats, VAR_2);
  FUNC_0(VAR_0, "failed to create job");
 } else {
  VAR_8->jtype = VAR_7;
  VAR_8->done = 0;
 }
 return (VAR_8);
}
