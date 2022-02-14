
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct negotiation_state {int rev_list; } ;
struct fetch_negotiator {scalar_t__ data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fetch_negotiator *VAR_0)
{
 FUNC_1(&((struct negotiation_state *)VAR_0->data)->rev_list);
 FUNC_0(VAR_0->data);
}
