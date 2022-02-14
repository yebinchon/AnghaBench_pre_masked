
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct news_id {int dummy; } ;
struct gather_entry {scalar_t__ num; int res_read; int res_bytes; scalar_t__ data; } ;
struct TYPE_5__ {int remaining; struct news_id id; scalar_t__ last; scalar_t__ cur; } ;
typedef TYPE_1__ gh_entry_t ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct news_id,struct news_id) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4 (struct gather_entry *VAR_7) {
  int VAR_8, VAR_9, VAR_10;
  gh_entry_t *VAR_11;
  FUNC_0 (VAR_2 < VAR_4);
  if (VAR_7->num <= 0 || VAR_7->res_read < 8 || !VAR_7->data) {
    return 0;
  }
  VAR_9 = VAR_8 = (VAR_7->res_read >> 2);
  VAR_10 = 6;
  VAR_8 /= VAR_10;
  VAR_9 = VAR_8 * VAR_10;
  if (VAR_6 >= 3) {
    FUNC_1 (VAR_5, "gather_heap_insert: %d elements (size %d)\n", VAR_8, (VAR_7->res_read >> 2) - 1);
  }
  if (VAR_8 <= 0) {
    return 0;
  }
  VAR_3 += VAR_8;

  VAR_11 = &VAR_1[VAR_2];
  VAR_11->remaining = VAR_8;
  VAR_11->cur = VAR_7->data;
  VAR_11->last = VAR_7->data + VAR_7->res_bytes / 4 + 1;
  FUNC_2 (VAR_11);

  int VAR_12 = ++VAR_2, VAR_13;
  struct news_id VAR_14 = VAR_11->id;
  while (VAR_12 > 1) {
    VAR_13 = (VAR_12 >> 1);
    if (FUNC_3 (VAR_0[VAR_13]->id, VAR_14) <= 0) { break; }
    VAR_0[VAR_12] = VAR_0[VAR_13];
    VAR_12 = VAR_13;
  }
  VAR_0[VAR_12] = VAR_11;

  return 1;
}
