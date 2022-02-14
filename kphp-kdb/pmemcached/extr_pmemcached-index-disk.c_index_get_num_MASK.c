
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {int data; TYPE_1__* header; } ;
struct index_entry {int dummy; } ;
struct TYPE_2__ {int nrecords; } ;


 int FUNC_0 (int) ;
 struct index_entry VAR_0 ;
 struct index_entry* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 struct metafile* VAR_2 ;

struct index_entry* FUNC_3 (int VAR_3, int VAR_4) {
  int VAR_5 = 0;
  int VAR_6 = 0;
  while (VAR_5 < VAR_1 && VAR_3 >= VAR_6 + VAR_2[VAR_5].header->nrecords) {
    VAR_6 += VAR_2[VAR_5].header->nrecords;
    VAR_5++;
  }
  if (VAR_5 == VAR_1) {
    return &VAR_0;
  }
  FUNC_2 (VAR_5);
  struct metafile* VAR_7 = &VAR_2[VAR_5];
  FUNC_0 (VAR_7->data);
  FUNC_0 (VAR_3 - VAR_6 >= 0);
  FUNC_0 (VAR_3 - VAR_6 < VAR_7->header->nrecords);

  return FUNC_1 (VAR_5, VAR_3 - VAR_6);
}
