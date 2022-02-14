
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ metafile; } ;
typedef TYPE_1__ user ;
struct TYPE_5__ {int multiple_types; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_1 ;

int *FUNC_1 (user *VAR_2, int VAR_3) {
  FUNC_0 (VAR_1.multiple_types >= 0 && VAR_1.multiple_types < 256 && VAR_2->metafile);

  if (VAR_1.multiple_types != 0) {
    return VAR_1.multiple_types == VAR_3 ? (int *)VAR_2->metafile : ((void*)0);
  }

  int *VAR_4 = (int *)VAR_2->metafile;
  while (*VAR_4 != 0) {
    if ((*VAR_4 >> 23) == VAR_3) {
      return ((int *)VAR_2->metafile) + *VAR_4 - (VAR_3 << 23);
    }
    VAR_4++;
  }
  return (int *)VAR_0;
}
