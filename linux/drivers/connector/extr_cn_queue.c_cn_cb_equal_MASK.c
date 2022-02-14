
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_id {scalar_t__ idx; scalar_t__ val; } ;



int FUNC_0(struct cb_id *VAR_0, struct cb_id *VAR_1)
{
 return ((VAR_0->idx == VAR_1->idx) && (VAR_0->val == VAR_1->val));
}
