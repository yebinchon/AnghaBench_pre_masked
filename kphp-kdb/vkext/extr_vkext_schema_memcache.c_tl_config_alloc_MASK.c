
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hash_table_tl_fun_id {int dummy; } ;
struct TYPE_11__ {size_t pos; TYPE_4__* ht_fname; TYPE_3__* ht_tname; TYPE_2__* ht_fid; TYPE_1__* ht_tid; } ;
struct TYPE_10__ {int size; int mask; void* E; } ;
struct TYPE_9__ {int size; int mask; void* E; } ;
struct TYPE_8__ {int size; int mask; void* E; } ;
struct TYPE_7__ {int size; int mask; void* E; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 TYPE_5__** VAR_1 ;
 size_t VAR_2 ;
 TYPE_5__* VAR_3 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;

void FUNC_3 (void) {
  VAR_3 = FUNC_2 (sizeof (*VAR_3));
  FUNC_0 (sizeof (*VAR_3));
  VAR_2 ++;
  if (VAR_2 >= VAR_0) {
    VAR_2 -= VAR_0;
  }
  VAR_1[VAR_2] = VAR_3;
  int VAR_4 = sizeof (struct hash_table_tl_fun_id);
  VAR_3->ht_tid = FUNC_1 (VAR_4);
  VAR_3->ht_tid->size = (1 << 12);
  VAR_3->ht_tid->mask = (1 << 12) - 1;
  VAR_3->ht_tid->E = FUNC_2 (sizeof (void *) * (1 << 12));
  VAR_3->ht_fid = FUNC_1 (VAR_4);
  VAR_3->ht_fid->size = (1 << 12);
  VAR_3->ht_fid->mask = (1 << 12) - 1;
  VAR_3->ht_fid->E = FUNC_2 (sizeof (void *) * (1 << 12));
  VAR_3->ht_tname = FUNC_1 (VAR_4);
  VAR_3->ht_tname->size = (1 << 12);
  VAR_3->ht_tname->mask = (1 << 12) - 1;
  VAR_3->ht_tname->E = FUNC_2 (sizeof (void *) * (1 << 12));
  VAR_3->ht_fname = FUNC_1 (VAR_4);
  VAR_3->ht_fname->size = (1 << 12);
  VAR_3->ht_fname->mask = (1 << 12) - 1;
  VAR_3->ht_fname->E = FUNC_2 (sizeof (void *) * (1 << 12));
  VAR_3->pos = VAR_2;

  FUNC_0 (VAR_4 * 4);
  FUNC_0 (sizeof (void *) * (1 << 12) * 4);
}
