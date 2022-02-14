
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t type; int shift; } ;
typedef TYPE_1__ field_desc ;
struct TYPE_6__ {int sn; int* data; int * std_val; } ;
typedef TYPE_2__ event ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;

inline char *FUNC_1 (event *VAR_3, field_desc *VAR_4) {
  if (VAR_4->type < 0) {
    return (char *)&VAR_3->std_val[VAR_4->type + VAR_0];
  }

  if (FUNC_0(VAR_2)) {
    if (VAR_4->shift >= VAR_3->sn || VAR_3->data[VAR_4->shift] == -1) {
      return (char *)&VAR_1;
    }
  }



  return &VAR_3->data[VAR_3->sn + (int)(unsigned char)VAR_3->data[VAR_4->shift]];
}
