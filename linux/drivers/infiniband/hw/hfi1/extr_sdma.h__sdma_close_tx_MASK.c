
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_txreq {size_t num_desc; int flags; TYPE_1__* descp; } ;
struct hfi1_devdata {int default_desc1; } ;
struct TYPE_2__ {int* qw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct hfi1_devdata *VAR_4,
      struct sdma_txreq *VAR_5)
{
 VAR_5->descp[VAR_5->num_desc].qw[0] |=
  VAR_0;
 VAR_5->descp[VAR_5->num_desc].qw[1] |=
  VAR_4->default_desc1;
 if (VAR_5->flags & VAR_3)
  VAR_5->descp[VAR_5->num_desc].qw[1] |=
   (VAR_1 |
    VAR_2);
}
