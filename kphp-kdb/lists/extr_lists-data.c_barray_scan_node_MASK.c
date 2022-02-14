
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value_t ;
struct heap_entry {int temp_id; } ;
typedef int listree_t ;
typedef int global_id_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct heap_entry* FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 (listree_t *VAR_4, int VAR_5) {
  int VAR_6 = FUNC_1 (VAR_5);
  if (((VAR_6 ^ VAR_3) & VAR_1) != 0) {
    return 0;
  }
  global_id_t VAR_7 = VAR_0[VAR_5];
  value_t VAR_8 = FUNC_2 (VAR_5);
  struct heap_entry *VAR_9 = FUNC_0 (VAR_8, VAR_7);
  if (VAR_9) {
    VAR_9->temp_id = VAR_5 * 2 + 1;
  }
  VAR_2++;
  return 1;
}
