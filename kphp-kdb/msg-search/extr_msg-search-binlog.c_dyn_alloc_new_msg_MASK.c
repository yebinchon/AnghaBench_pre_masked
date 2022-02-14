
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* msgs; } ;
typedef TYPE_1__ user_mod_header_t ;
struct TYPE_6__ {int user_id; int message_id; int hc; int * hashes; struct TYPE_6__* prev; } ;
typedef TYPE_2__ message_t ;
typedef int hash_t ;


 TYPE_2__* FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;

hash_t *FUNC_2 (int VAR_2, int VAR_3, int VAR_4) {
  user_mod_header_t *VAR_5 = FUNC_1(VAR_2, 1);
  message_t *VAR_6;
  int VAR_7 = sizeof(message_t) + (VAR_4 - 1)*sizeof(hash_t);
  if (!VAR_5) { return 0; }
  VAR_6 = FUNC_0 (VAR_7, sizeof(int));
  if (!VAR_6) { return 0; }
  VAR_6->prev = VAR_5->msgs;
  VAR_6->user_id = VAR_2;
  VAR_6->message_id = VAR_3;
  VAR_6->hc = VAR_4;
  VAR_5->msgs = VAR_6;
  VAR_0++;
  VAR_1 += VAR_7;
  return VAR_6->hashes;
}
