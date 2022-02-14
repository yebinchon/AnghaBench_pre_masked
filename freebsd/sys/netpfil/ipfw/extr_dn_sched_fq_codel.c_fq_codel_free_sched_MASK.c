
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fq_codel_si {int * flows; } ;
struct dn_sch_inst {int dummy; } ;
struct TYPE_2__ {int ref_count; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct dn_sch_inst *VAR_2)
{
 struct fq_codel_si *VAR_3 = (struct fq_codel_si *)VAR_2 ;


 FUNC_0(VAR_3->flows , VAR_0);
 VAR_3->flows = ((void*)0);
 VAR_1.ref_count--;

 return 0;
}
