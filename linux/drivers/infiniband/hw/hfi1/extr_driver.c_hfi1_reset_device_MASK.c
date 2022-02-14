
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {int flags; int num_pports; struct hfi1_pportdata* pport; scalar_t__ rcd; int kregbase1; } ;
struct TYPE_2__ {scalar_t__ sps_ctxts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int,int) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct hfi1_devdata*,int) ;
 struct hfi1_devdata* FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (struct hfi1_devdata*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 int FUNC_8 (struct hfi1_pportdata*) ;

int FUNC_9(int VAR_7)
{
 int VAR_8;
 struct hfi1_devdata *VAR_9 = FUNC_3(VAR_7);
 struct hfi1_pportdata *VAR_10;
 int VAR_11;

 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto bail;
 }

 FUNC_1(VAR_9, "Reset on unit %u requested\n", VAR_7);

 if (!VAR_9->kregbase1 || !(VAR_9->flags & VAR_4)) {
  FUNC_1(VAR_9,
       "Invalid unit number %u or not initialized or not present\n",
       VAR_7);
  VAR_8 = -VAR_2;
  goto bail;
 }


 FUNC_5(&VAR_5);
 if (VAR_9->rcd)
  if (VAR_6.sps_ctxts) {
   FUNC_6(&VAR_5);
   VAR_8 = -VAR_0;
   goto bail;
  }
 FUNC_6(&VAR_5);

 for (VAR_11 = 0; VAR_11 < VAR_9->num_pports; ++VAR_11) {
  VAR_10 = VAR_9->pport + VAR_11;

  FUNC_8(VAR_10);
 }
 if (VAR_9->flags & VAR_3)
  FUNC_7(VAR_9);

 FUNC_4(VAR_9);

 VAR_8 = FUNC_2(VAR_9, 1);

 if (VAR_8)
  FUNC_0(VAR_9,
      "Reinitialize unit %u after reset failed with %d\n",
      VAR_7, VAR_8);
 else
  FUNC_1(VAR_9, "Reinitialized unit %u after resetting\n",
       VAR_7);

bail:
 return VAR_8;
}
