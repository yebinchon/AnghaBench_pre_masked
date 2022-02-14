
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qib_pportdata {int dummy; } ;
struct qib_devdata {scalar_t__ rcvhdrentsize; scalar_t__ rcvhdrsize; scalar_t__ rcvhdrcnt; scalar_t__ pioavailregs_phys; int piobcnt2k; int piobcnt4k; scalar_t__ control; int num_pports; int flags; struct qib_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct qib_devdata*,int ,int,int ,int *) ;
 int FUNC_1 (struct qib_devdata*,char*,unsigned long,unsigned long long) ;
 int FUNC_2 (struct qib_pportdata*) ;
 scalar_t__ FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,int *) ;
 int FUNC_5 (struct qib_devdata*,int ,scalar_t__) ;
 int FUNC_6 (struct qib_pportdata*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_8(struct qib_devdata *VAR_15)
{
 int VAR_16 = 0, VAR_17;
 u64 VAR_18;

 FUNC_5(VAR_15, VAR_8, VAR_15->rcvhdrentsize);
 FUNC_5(VAR_15, VAR_9, VAR_15->rcvhdrsize);
 FUNC_5(VAR_15, VAR_7, VAR_15->rcvhdrcnt);
 FUNC_5(VAR_15, VAR_10, VAR_15->pioavailregs_phys);
 VAR_18 = FUNC_3(VAR_15, VAR_10);
 if (VAR_18 != VAR_15->pioavailregs_phys) {
  FUNC_1(VAR_15,
   "Catastrophic software error, SendPIOAvailAddr written as %lx, read back as %llx\n",
   (unsigned long) VAR_15->pioavailregs_phys,
   (unsigned long long) VAR_18);
  VAR_16 = -VAR_0;
 }

 VAR_17 = VAR_15->piobcnt2k + VAR_15->piobcnt4k + VAR_1;
 FUNC_0(VAR_15, 0, VAR_17, VAR_5, ((void*)0));

 FUNC_0(VAR_15, 0, VAR_17, VAR_4, ((void*)0));

 FUNC_4(VAR_15, &VAR_13);
 FUNC_4(VAR_15, &VAR_14);

 VAR_15->control &= ~VAR_3;
 FUNC_5(VAR_15, VAR_6, VAR_15->control);






 FUNC_7(VAR_15, 0);
 for (VAR_17 = 0; VAR_17 < VAR_15->num_pports; ++VAR_17) {
  struct qib_pportdata *VAR_19 = VAR_15->pport + VAR_17;

  FUNC_6(VAR_19, VAR_11,
        VAR_12 & 0xf);

  if (VAR_15->flags & VAR_2)
   FUNC_2(VAR_19);
 }
 VAR_15->control |= VAR_3;
 FUNC_5(VAR_15, VAR_6, VAR_15->control);

 return VAR_16;
}
