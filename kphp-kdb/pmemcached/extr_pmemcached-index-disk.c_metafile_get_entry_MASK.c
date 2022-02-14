
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_entry {int dummy; } ;
struct TYPE_2__ {size_t* local_offsets; int * data; } ;


 TYPE_1__* VAR_0 ;

inline struct index_entry* FUNC_0 ( int VAR_1, int VAR_2 ) {
  return (struct index_entry *)&VAR_0[VAR_1].data[VAR_0[VAR_1].local_offsets[VAR_2]];
}
