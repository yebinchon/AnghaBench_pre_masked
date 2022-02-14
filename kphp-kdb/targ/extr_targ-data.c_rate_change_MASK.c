
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* uplink; } ;
typedef TYPE_1__ utree_t ;
struct TYPE_12__ {int rate; size_t uid; TYPE_4__* uplink_rate; TYPE_4__* right_rate; TYPE_4__* left_rate; } ;
typedef TYPE_2__ user_t ;
struct TYPE_14__ {TYPE_1__* uplink; } ;
struct TYPE_13__ {TYPE_1__* right; TYPE_1__* left; } ;


 int* VAR_0 ;
 int FUNC_0 () ;
 TYPE_6__* VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_6__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_4__*,TYPE_4__*) ;

void FUNC_3 (user_t *VAR_2, int VAR_3) {
  if (!VAR_2) {
    return;
  }

  utree_t *VAR_4 = FUNC_2 (VAR_2->left_rate, VAR_2->right_rate);

  if (VAR_4) {
    VAR_4->uplink = VAR_2->uplink_rate;
  }



  if (VAR_2->uplink_rate->left == (utree_t *)VAR_2) {
    VAR_2->uplink_rate->left = VAR_4;
  } else {
    VAR_2->uplink_rate->right = VAR_4;
  }

  VAR_2->rate = (VAR_3 << 8) + (FUNC_0 () & 255);

  VAR_2->left_rate = VAR_2->right_rate = VAR_2->uplink_rate = 0;

  VAR_1 = FUNC_1 (VAR_1, (utree_t *)VAR_2);
  VAR_1->uplink = (utree_t *)&VAR_1;
  VAR_0[VAR_2->uid] = VAR_3;
}
