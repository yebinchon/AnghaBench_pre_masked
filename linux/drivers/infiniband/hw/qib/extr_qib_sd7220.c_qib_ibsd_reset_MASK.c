
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {unsigned long long hwerrmask; int sdepb_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_0 (struct qib_devdata*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct qib_devdata*,char*) ;
 int FUNC_2 (struct qib_devdata*,int ) ;
 unsigned long long FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct qib_devdata*,int ,int ,int,int) ;
 int FUNC_7 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct qib_devdata *VAR_8, int VAR_9)
{
 u64 VAR_10;
 int VAR_11 = 0;
 unsigned long VAR_12;

 VAR_10 = FUNC_3(VAR_8, VAR_6);
 if (VAR_9) {




  FUNC_8(&VAR_8->cspec->sdepb_lock, VAR_12);
  FUNC_0(VAR_8, VAR_0, 1);
  VAR_10 |= 1ULL;

  FUNC_7(VAR_8, VAR_4,
          VAR_8->cspec->hwerrmask &
          ~VAR_3);
  FUNC_7(VAR_8, VAR_6, VAR_10);

  FUNC_2(VAR_8, VAR_7);
  FUNC_10(2);

  FUNC_0(VAR_8, VAR_0, -1);
  FUNC_9(&VAR_8->cspec->sdepb_lock, VAR_12);
 } else {







  u64 VAR_13;

  VAR_10 &= ~(1ULL);
  FUNC_7(VAR_8, VAR_4,
          VAR_8->cspec->hwerrmask &
          ~VAR_3);

  VAR_11 = FUNC_4(VAR_8);
  if (VAR_11 < 0)
   FUNC_1(VAR_8, "unable to re-sync IB EPB\n");


  VAR_11 = FUNC_6(VAR_8, VAR_0, VAR_1, 1, 1);
  if (VAR_11 < 0)
   goto bail;

  VAR_11 = FUNC_6(VAR_8, VAR_0, VAR_2, 0x80,
   0x80);
  if (VAR_11 < 0) {
   FUNC_1(VAR_8, "Failed to set WDOG disable\n");
   goto bail;
  }
  FUNC_7(VAR_8, VAR_6, VAR_10);

  FUNC_2(VAR_8, VAR_7);
  FUNC_10(1);

  FUNC_5(VAR_8);
  VAR_13 = FUNC_3(VAR_8, VAR_5);
  if (VAR_13 & VAR_3) {
   FUNC_1(VAR_8, "IBUC Parity still set after RST\n");
   VAR_8->cspec->hwerrmask &=
    ~VAR_3;
  }
  FUNC_7(VAR_8, VAR_4,
   VAR_8->cspec->hwerrmask);
 }

bail:
 return VAR_11;
}
