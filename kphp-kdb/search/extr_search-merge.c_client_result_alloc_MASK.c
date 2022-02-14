
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_entry {int res_read; int res_bytes; struct gather_chunk* last; struct gather_chunk* first; } ;
struct gather_chunk {scalar_t__ data; struct gather_chunk* next; } ;
typedef int nb_allocator_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct gather_chunk* FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2 (nb_allocator_t VAR_1, struct gather_entry *VAR_2, char **VAR_3) {
  int VAR_4 = VAR_2->res_read, VAR_5;
  struct gather_chunk *VAR_6;
  FUNC_0 (VAR_4 >= 4 && VAR_4 <= VAR_2->res_bytes);
  *VAR_3 = 0;
  if (VAR_4 == VAR_2->res_bytes) {
    return 0;
  }
  VAR_5 = (VAR_4 - 4) % (4 * VAR_0);
  if (VAR_5) {
    *VAR_3 = (char *) VAR_2->last->data + VAR_5;
    return 4 * VAR_0 - VAR_5;
  }
  VAR_6 = FUNC_1 (VAR_1, sizeof (struct gather_chunk));
  VAR_6->next = 0;
  if (!VAR_2->first) {
    VAR_2->first = VAR_2->last = VAR_6;
  } else {
    VAR_2->last->next = VAR_6;
    VAR_2->last = VAR_6;
  }
  *VAR_3 = (char *) VAR_6->data;
  return 4 * VAR_0;
}
