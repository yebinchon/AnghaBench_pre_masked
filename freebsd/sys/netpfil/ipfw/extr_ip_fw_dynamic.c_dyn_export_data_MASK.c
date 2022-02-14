
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct dyn_data {int flags; int hashval; int ack_rev; int ack_fwd; int state; int rulenum; scalar_t__ expire; scalar_t__ bcnt_rev; scalar_t__ bcnt_fwd; scalar_t__ pcnt_rev; scalar_t__ pcnt_fwd; } ;
typedef int set ;
struct TYPE_3__ {char rule; struct TYPE_3__* next; int bucket; scalar_t__ count; int ack_rev; int ack_fwd; int * parent; int state; scalar_t__ expire; scalar_t__ bcnt; scalar_t__ pcnt; int kidx; int dyn_type; } ;
typedef TYPE_1__ ipfw_dyn_rule ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int *,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(const struct dyn_data *VAR_3, uint16_t VAR_4, uint8_t VAR_5,
    uint8_t VAR_6, ipfw_dyn_rule *VAR_7)
{

 VAR_7->dyn_type = VAR_5;
 VAR_7->kidx = VAR_4;
 VAR_7->pcnt = VAR_3->pcnt_fwd + VAR_3->pcnt_rev;
 VAR_7->bcnt = VAR_3->bcnt_fwd + VAR_3->bcnt_rev;
 VAR_7->expire = FUNC_0(VAR_3->expire, VAR_2) ? 0:
     VAR_3->expire - VAR_2;


 FUNC_1(&VAR_7->rule, &VAR_3->rulenum, sizeof(VAR_3->rulenum));


 FUNC_1((char *)&VAR_7->rule + sizeof(VAR_3->rulenum), &VAR_6, sizeof(VAR_6));

 VAR_7->state = VAR_3->state;
 if (VAR_3->flags & VAR_0)
  VAR_7->state |= VAR_1;


 VAR_7->parent = ((void*)0);
 VAR_7->ack_fwd = VAR_3->ack_fwd;
 VAR_7->ack_rev = VAR_3->ack_rev;
 VAR_7->count = 0;
 VAR_7->bucket = VAR_3->hashval;




 VAR_7->next = (ipfw_dyn_rule *)1;
}
