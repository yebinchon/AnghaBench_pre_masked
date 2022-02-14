
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct news_id {int dummy; } ;
struct gather_entry {int bytes; int* data; } ;
struct TYPE_5__ {int remaining; int* cur; int* last; struct news_id id; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct news_id,struct news_id) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4 (struct gather_entry *VAR_8) {
  gh_entry_t *VAR_9;
  FUNC_0 (VAR_2 < VAR_4);
  int VAR_10 = 6;
  if (VAR_8->bytes < 8 || VAR_8->data[0] != VAR_5 || VAR_8->data[1] <= 0 || VAR_8->bytes != 8 + 4 * VAR_10 * (VAR_8->data[1])) {
    return 0;
  }
  if (VAR_7 >= 3) {
    FUNC_1 (VAR_6, "gather_heap_insert: %d elements (size %d)\n", VAR_8->data[1], VAR_8->bytes);
  }
  int VAR_11 = VAR_8->data[1];
  VAR_3 += VAR_11;

  VAR_9 = &VAR_1[VAR_2];
  VAR_9->remaining = VAR_11;
  VAR_9->cur = VAR_8->data + 2;
  VAR_9->last = VAR_8->data + 2 + VAR_11 * VAR_10;
  FUNC_2 (VAR_9);

  int VAR_12 = ++VAR_2, VAR_13;
  struct news_id VAR_14 = VAR_9->id;
  while (VAR_12 > 1) {
    VAR_13 = (VAR_12 >> 1);
    if (FUNC_3 (VAR_0[VAR_13]->id, VAR_14) <= 0) { break; }
    VAR_0[VAR_12] = VAR_0[VAR_13];
    VAR_12 = VAR_13;
  }
  VAR_0[VAR_12] = VAR_9;

  return 1;
}
