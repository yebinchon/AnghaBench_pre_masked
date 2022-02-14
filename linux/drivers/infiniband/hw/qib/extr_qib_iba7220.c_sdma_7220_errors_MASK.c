
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int current_state; } ;
struct qib_pportdata {int sdma_lock; TYPE_2__ sdma_state; int port; struct qib_devdata* dd; } ;
struct qib_devdata {int unit; TYPE_1__* cspec; } ;
struct TYPE_3__ {char* sdmamsgbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct qib_pportdata*,int,char*,int) ;
 int FUNC_3 (struct qib_devdata*,char*,int ,int ,...) ;
 unsigned long FUNC_4 (struct qib_devdata*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_8, u64 VAR_9)
{
 unsigned long VAR_10;
 struct qib_devdata *VAR_11 = VAR_8->dd;
 char *VAR_12;

 VAR_9 &= VAR_1;

 VAR_12 = VAR_11->cspec->sdmamsgbuf;
 FUNC_2(VAR_8, VAR_9, VAR_12,
  sizeof(VAR_11->cspec->sdmamsgbuf));
 FUNC_5(&VAR_8->sdma_lock, VAR_10);

 if (VAR_9 & FUNC_0(VAR_4)) {
  unsigned long VAR_13[3];

  VAR_13[0] = FUNC_4(VAR_11, VAR_5);
  VAR_13[1] = FUNC_4(VAR_11, VAR_5 + 1);
  VAR_13[2] = FUNC_4(VAR_11, VAR_5 + 2);

  FUNC_3(VAR_8->dd,
       "IB%u:%u SendBufMisuse: %04lx %016lx %016lx\n",
       VAR_8->dd->unit, VAR_8->port, VAR_13[2], VAR_13[1],
       VAR_13[0]);
 }

 if (VAR_9 & FUNC_0(VAR_3))
  FUNC_3(VAR_11, "IB%u:%u SDmaUnexpData\n", VAR_8->dd->unit,
       VAR_8->port);

 switch (VAR_8->sdma_state.current_state) {
 case 134:

  break;

 case 133:

  break;

 case 132:

  break;

 case 131:

  break;

 case 130:
  if (VAR_9 & FUNC_0(VAR_2))
   FUNC_1(VAR_8,
    VAR_6);
  break;

 case 129:

  break;

 case 128:
  if (VAR_9 & VAR_0)
   FUNC_1(VAR_8,
    VAR_7);
  break;
 }

 FUNC_6(&VAR_8->sdma_lock, VAR_10);
}
