
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {size_t current_state; } ;
struct qib_pportdata {int sdma_lock; TYPE_2__ sdma_state; TYPE_1__* cpspec; int port; struct qib_devdata* dd; } ;
struct qib_devdata {int unit; } ;
struct TYPE_3__ {int sdmamsgbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_pportdata*,int ) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (int ,int,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct qib_devdata*,char*,int ,int ) ;
 int FUNC_4 (struct qib_devdata*,int ,char*,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;







 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_9, u64 VAR_10)
{
 unsigned long VAR_11;
 struct qib_devdata *VAR_12 = VAR_9->dd;

 VAR_10 &= VAR_0;
 FUNC_2(VAR_9->cpspec->sdmamsgbuf, sizeof(VAR_9->cpspec->sdmamsgbuf),
     VAR_10, VAR_3);

 if (VAR_10 & VAR_2)
  FUNC_3(VAR_12, "IB%u:%u SDmaUnexpData\n", VAR_12->unit,
       VAR_9->port);

 FUNC_5(&VAR_9->sdma_lock, VAR_11);

 if (VAR_10 != VAR_1) {

  FUNC_4(VAR_12, VAR_9->port,
   "SDMA %s 0x%016llx %s\n",
   VAR_8[VAR_9->sdma_state.current_state],
   VAR_10, VAR_9->cpspec->sdmamsgbuf);
  FUNC_1(VAR_9);
 }

 switch (VAR_9->sdma_state.current_state) {
 case 134:
  break;

 case 133:
  if (VAR_10 & VAR_1)
   FUNC_0(VAR_9,
    VAR_4);
  break;

 case 132:
  break;

 case 131:
  break;

 case 130:
  if (VAR_10 & VAR_1)
   FUNC_0(VAR_9,
    VAR_5);
  break;

 case 129:
  if (VAR_10 & VAR_1)
   FUNC_0(VAR_9,
    VAR_6);
  break;

 case 128:
  FUNC_0(VAR_9, VAR_7);
  FUNC_0(VAR_9, VAR_6);
  break;
 }

 FUNC_6(&VAR_9->sdma_lock, VAR_11);
}
