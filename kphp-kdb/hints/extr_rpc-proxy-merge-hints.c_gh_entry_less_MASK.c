
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rating; scalar_t__ type; scalar_t__ object_id; } ;
typedef TYPE_1__ gh_entry_t ;



__attribute__((used)) static inline int FUNC_0 (gh_entry_t *VAR_0, gh_entry_t *VAR_1) {
  return (VAR_0->rating > VAR_1->rating + 1e-9 || (VAR_0->rating >= VAR_1->rating - 1e-9 &&
          (VAR_0->type < VAR_1->type || (VAR_0->type == VAR_1->type && VAR_0->object_id < VAR_1->object_id))));
}
