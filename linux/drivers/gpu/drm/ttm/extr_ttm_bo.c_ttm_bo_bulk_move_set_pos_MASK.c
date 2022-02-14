
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lru_bulk_move_pos {struct ttm_buffer_object* last; struct ttm_buffer_object* first; } ;
struct ttm_buffer_object {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct ttm_lru_bulk_move_pos *VAR_0,
         struct ttm_buffer_object *VAR_1)
{
 if (!VAR_0->first)
  VAR_0->first = VAR_1;
 VAR_0->last = VAR_1;
}
