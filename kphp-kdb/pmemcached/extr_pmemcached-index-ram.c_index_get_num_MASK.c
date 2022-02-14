
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry {int dummy; } ;


 int FUNC_0 (int) ;
 struct index_entry VAR_0 ;
 int * VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;

struct index_entry* FUNC_1 (int VAR_4, int VAR_5) {
  if (VAR_4 >= VAR_3) {
    return &VAR_0;
  }
  FUNC_0 (VAR_4 >= 0);
  return (struct index_entry *)&VAR_1[VAR_2[VAR_4]];
}
