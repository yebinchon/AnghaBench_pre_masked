
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_ep_common {size_t state; int mutex; } ;
typedef enum c4iw_ep_state { ____Placeholder_c4iw_ep_state } c4iw_ep_state ;


 int FUNC_0 (struct c4iw_ep_common*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_4(struct c4iw_ep_common *VAR_1, enum c4iw_ep_state VAR_2)
{
 FUNC_1(&VAR_1->mutex);
 FUNC_3("%s -> %s\n", VAR_0[VAR_1->state], VAR_0[VAR_2]);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->mutex);
 return;
}
