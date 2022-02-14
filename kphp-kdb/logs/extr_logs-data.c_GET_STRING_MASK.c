
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shift; } ;
typedef TYPE_1__ field_desc ;
struct TYPE_6__ {int sn; char* data; } ;
typedef TYPE_2__ event ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;

inline char *FUNC_1 (event *VAR_2, field_desc *VAR_3) {
  if (FUNC_0(VAR_1)) {
    if (VAR_3->shift >= VAR_2->sn || *(short *)&VAR_2->data[VAR_3->shift] == -1) {
      return VAR_0;
    }
  }



  return &VAR_2->data[VAR_2->sn + (int)*(short *)&VAR_2->data[VAR_3->shift]];
}
