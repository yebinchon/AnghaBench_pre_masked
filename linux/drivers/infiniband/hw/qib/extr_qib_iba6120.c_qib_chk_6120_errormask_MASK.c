
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int flags; TYPE_1__* cspec; int pcidev; } ;
struct TYPE_2__ {unsigned long errormask; unsigned long hwerrmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,unsigned long,unsigned long,int,unsigned long) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 unsigned long FUNC_2 (struct qib_devdata*,int ) ;
 int FUNC_3 (struct qib_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_4(struct qib_devdata *VAR_8)
{
 static u32 VAR_9;
 u32 VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (!VAR_8->cspec->errormask || !(VAR_8->flags & VAR_0))
  return;

 VAR_11 = FUNC_2(VAR_8, VAR_4);

 if (VAR_11 == VAR_8->cspec->errormask)
  return;
 VAR_9++;

 VAR_12 = FUNC_2(VAR_8, VAR_6);
 VAR_10 = FUNC_1(VAR_8, VAR_2);

 FUNC_3(VAR_8, VAR_4,
  VAR_8->cspec->errormask);

 if ((VAR_12 & VAR_8->cspec->hwerrmask) ||
     (VAR_10 & VAR_1)) {
  FUNC_3(VAR_8, VAR_5, 0ULL);
  FUNC_3(VAR_8, VAR_3, 0ULL);

  FUNC_3(VAR_8, VAR_7, 0ULL);
  FUNC_0(VAR_8->pcidev,
    "errormask fixed(%u) %lx->%lx, ctrl %x hwerr %lx\n",
    VAR_9, VAR_11, (unsigned long)VAR_8->cspec->errormask,
    VAR_10, VAR_12);
 }
}
