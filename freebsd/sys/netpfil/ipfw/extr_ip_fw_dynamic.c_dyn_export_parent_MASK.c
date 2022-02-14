
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct dyn_parent {int hashval; int rulenum; scalar_t__ expire; } ;
typedef int set ;
struct TYPE_3__ {char rule; struct TYPE_3__* next; int bucket; scalar_t__ ack_rev; scalar_t__ ack_fwd; scalar_t__ state; int * parent; scalar_t__ bcnt; scalar_t__ pcnt; scalar_t__ expire; void* count; void* kidx; int dyn_type; } ;
typedef TYPE_1__ ipfw_dyn_rule ;


 scalar_t__ FUNC_0 (struct dyn_parent const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,int *,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(const struct dyn_parent *VAR_2, uint16_t VAR_3, uint8_t VAR_4,
    ipfw_dyn_rule *VAR_5)
{

 VAR_5->dyn_type = VAR_0;
 VAR_5->kidx = VAR_3;
 VAR_5->count = (uint16_t)FUNC_0(VAR_2);
 VAR_5->expire = FUNC_1(VAR_2->expire, VAR_1) ? 0:
     VAR_2->expire - VAR_1;


 FUNC_2(&VAR_5->rule, &VAR_2->rulenum, sizeof(VAR_2->rulenum));


 FUNC_2((char *)&VAR_5->rule + sizeof(VAR_2->rulenum), &VAR_4, sizeof(VAR_4));


 VAR_5->pcnt = 0;
 VAR_5->bcnt = 0;
 VAR_5->parent = ((void*)0);
 VAR_5->state = 0;
 VAR_5->ack_fwd = 0;
 VAR_5->ack_rev = 0;
 VAR_5->bucket = VAR_2->hashval;




 VAR_5->next = (ipfw_dyn_rule *)1;
}
