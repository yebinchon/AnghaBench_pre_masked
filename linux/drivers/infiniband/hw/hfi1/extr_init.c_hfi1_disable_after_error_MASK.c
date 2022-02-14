
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hfi1_pportdata {int * statusp; } ;
struct hfi1_devdata {int flags; scalar_t__ num_pports; TYPE_1__* status; struct hfi1_pportdata* pport; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_pportdata*,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_5)
{
 if (VAR_5->flags & VAR_0) {
  u32 VAR_6;

  VAR_5->flags &= ~VAR_0;
  if (VAR_5->pport)
   for (VAR_6 = 0; VAR_6 < VAR_5->num_pports; ++VAR_6) {
    struct hfi1_pportdata *VAR_7;

    VAR_7 = VAR_5->pport + VAR_6;
    if (VAR_5->flags & VAR_1)
     FUNC_0(VAR_7, VAR_4);

    if (VAR_7->statusp)
     *VAR_7->statusp &= ~VAR_3;
   }
 }






 if (VAR_5->status)
  VAR_5->status->dev |= VAR_2;
}
