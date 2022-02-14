
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct qib_devdata {int flags; int control; int revision; TYPE_3__* pport; TYPE_2__* cspec; int lbus_width; int * kregbase; int z_int_counter; int unit; } ;
struct TYPE_6__ {int lflags_lock; int lflags; TYPE_1__* cpspec; } ;
struct TYPE_5__ {int presets_needed; } ;
struct TYPE_4__ {int ibcddrctrl; scalar_t__ iblnkerrdelta; scalar_t__ ibsymdelta; scalar_t__ ibdeltainprog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,char*,...) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct qib_devdata*,int *,int *,int *) ;
 scalar_t__ FUNC_7 (struct qib_devdata*,int ,int *) ;
 int FUNC_8 (struct qib_devdata*,int ,int ,int ) ;
 int FUNC_9 (struct qib_devdata*) ;
 int FUNC_10 (struct qib_devdata*,size_t,unsigned long long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int,int *) ;

__attribute__((used)) static int FUNC_15(struct qib_devdata *VAR_8)
{
 u64 VAR_9;
 int VAR_10;
 int VAR_11;
 u16 VAR_12;
 u8 VAR_13, VAR_14;
 unsigned long VAR_15;

 FUNC_6(VAR_8, &VAR_12, &VAR_13, &VAR_14);


 FUNC_4(VAR_8, "Resetting InfiniPath unit %u\n", VAR_8->unit);


 FUNC_3(VAR_8, 0);

 VAR_8->pport->cpspec->ibdeltainprog = 0;
 VAR_8->pport->cpspec->ibsymdelta = 0;
 VAR_8->pport->cpspec->iblnkerrdelta = 0;






 VAR_8->flags &= ~(VAR_3 | VAR_4);

 VAR_8->z_int_counter = FUNC_5(VAR_8);
 VAR_9 = VAR_8->control | VAR_5;
 FUNC_14(VAR_9, &VAR_8->kregbase[VAR_6]);
 FUNC_0();

 for (VAR_10 = 1; VAR_10 <= 5; VAR_10++) {





  FUNC_1(1000 + (1 + VAR_10) * 2000);

  FUNC_8(VAR_8, VAR_12, VAR_13, VAR_14);





  VAR_9 = FUNC_11(&VAR_8->kregbase[VAR_7]);
  if (VAR_9 == VAR_8->revision) {
   VAR_8->flags |= VAR_4;
   VAR_11 = FUNC_9(VAR_8);
   goto bail;
  }
 }
 VAR_11 = 0;

bail:
 if (VAR_11) {
  if (FUNC_7(VAR_8, VAR_8->lbus_width, ((void*)0)))
   FUNC_4(VAR_8,
    "Reset failed to setup PCIe or interrupts; continuing anyway\n");


  FUNC_10(VAR_8, VAR_6, 0ULL);


  FUNC_2(VAR_8);


  if (VAR_8->pport->cpspec->ibcddrctrl & VAR_0)
   VAR_8->cspec->presets_needed = 1;
  FUNC_12(&VAR_8->pport->lflags_lock, VAR_15);
  VAR_8->pport->lflags |= VAR_2;
  VAR_8->pport->lflags &= ~VAR_1;
  FUNC_13(&VAR_8->pport->lflags_lock, VAR_15);
 }

 return VAR_11;
}
