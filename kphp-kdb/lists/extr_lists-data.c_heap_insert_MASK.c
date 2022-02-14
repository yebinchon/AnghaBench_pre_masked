
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_t ;
struct heap_entry {int global_id; int value; } ;
typedef int global_id_t ;


 struct heap_entry* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct heap_entry*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

struct heap_entry *FUNC_3 (value_t VAR_3, global_id_t VAR_4) {
  int VAR_5;
  if (VAR_1 == VAR_2) {
    if (FUNC_0 (&VAR_0[1], VAR_3, VAR_4) >= 0) {
      return 0;
    }
    VAR_5 = FUNC_1 (VAR_3, VAR_4);
  } else {
    VAR_5 = FUNC_2 (VAR_3, VAR_4);
  }
  VAR_0[VAR_5].value = VAR_3;
  VAR_0[VAR_5].global_id = VAR_4;
  return &VAR_0[VAR_5];
}
