
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int utree_t ;
struct TYPE_9__ {int rate; int uid; int user_id; int privacy; int cartesian_y; scalar_t__ prev_user_creations; } ;
typedef TYPE_1__ user_t ;
struct TYPE_10__ {int * uplink; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int *) ;
 TYPE_1__* FUNC_4 (int) ;

user_t *FUNC_5 (int VAR_5) {
  int VAR_6 = FUNC_0 (VAR_5);
  user_t *VAR_7;
  if (VAR_6 < 0) { return 0; }
  VAR_7 = VAR_0[VAR_6];
  if (VAR_7) { return VAR_7; }
  VAR_7 = FUNC_4 (sizeof (user_t));
  FUNC_2 (VAR_7, 0, sizeof(user_t));
  VAR_7->rate = (FUNC_1 () & 255) - 256;
  VAR_7->uid = VAR_6;
  VAR_7->user_id = VAR_5;
  VAR_7->privacy = 1;
  VAR_7->prev_user_creations = ++VAR_4;
  VAR_0[VAR_6] = VAR_7;
  if (VAR_6 > VAR_1) { VAR_1 = VAR_6; }
  VAR_3++;

  VAR_7->cartesian_y = FUNC_1 ();
  VAR_2 = FUNC_3 (VAR_2, (utree_t *)VAR_7);
  VAR_2->uplink = (utree_t *)&VAR_2;

  return VAR_7;
}
