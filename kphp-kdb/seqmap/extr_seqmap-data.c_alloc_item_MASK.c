
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct item {int key_len; int value_len; int time; int type; int y; scalar_t__ value; void* key; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int const*,int) ;
 int FUNC_3 (struct item*,int ,int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,struct item*) ;
 void* FUNC_5 (int) ;

struct item *FUNC_6 (int VAR_3, const int *VAR_4, int VAR_5, int VAR_6) {
  FUNC_0 (VAR_6 == 0 || VAR_6 == -1);
  struct item *VAR_7 = FUNC_5 (sizeof (*VAR_7));
  FUNC_3 (VAR_7, 0, sizeof (*VAR_7));
  VAR_2 += sizeof (*VAR_7);
  VAR_7->key_len = VAR_3;
  VAR_7->key = FUNC_5 (4 * VAR_3);
  FUNC_2 (VAR_7->key, VAR_4, 4 * VAR_3);
  VAR_2 += VAR_3 * 4;
  VAR_7->value_len = VAR_6;
  VAR_7->value = 0;
  VAR_1 ++;
  VAR_7->time = -1;
  VAR_7->type = VAR_5;
  VAR_7->y = FUNC_1 ();

  VAR_0 = FUNC_4 (VAR_0, VAR_7);
  FUNC_0 (VAR_0->size == VAR_1);
  return VAR_7;
}
