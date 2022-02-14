
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int dummy; } ;


 struct entry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct entry*) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_3 (int VAR_8) {
  if (VAR_7 >= 4) { FUNC_1 (VAR_6, "delete_cache_item\n"); }
  struct entry* VAR_9 = VAR_0 + VAR_8;
  FUNC_2 (VAR_9);
  FUNC_0 (VAR_8);
  VAR_3[VAR_4[VAR_8]] = VAR_3[VAR_8];
  VAR_4[VAR_3[VAR_8]] = VAR_4[VAR_8];
  VAR_5[VAR_2++] = VAR_8;
  VAR_1 ++;
}
