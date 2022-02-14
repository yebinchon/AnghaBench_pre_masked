
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_devdata {int pioavregs; int num_pports; char* freezemsg; scalar_t__ freezelen; scalar_t__ pioavailregs_dma; TYPE_2__* pport; int * devstatusp; int pioavailregs_phys; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int * statusp; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int *,int ) ;
 int FUNC_1 (struct qib_devdata*,char*) ;

__attribute__((used)) static int FUNC_2(struct qib_devdata *VAR_4)
{
 int VAR_5, VAR_6;
 u64 *VAR_7;

 VAR_4->pioavailregs_dma = FUNC_0(
  &VAR_4->pcidev->dev, VAR_3, &VAR_4->pioavailregs_phys,
  VAR_1);
 if (!VAR_4->pioavailregs_dma) {
  FUNC_1(VAR_4,
   "failed to allocate PIOavail reg area in memory\n");
  VAR_5 = -VAR_0;
  goto done;
 }





 VAR_7 = (u64 *)
  ((char *) VAR_4->pioavailregs_dma +
   ((2 * VAR_2 +
     VAR_4->pioavregs * sizeof(u64)) & ~VAR_2));

 VAR_4->devstatusp = VAR_7;
 *VAR_7++ = 0;
 for (VAR_6 = 0; VAR_6 < VAR_4->num_pports; ++VAR_6) {
  VAR_4->pport[VAR_6].statusp = VAR_7;
  *VAR_7++ = 0;
 }





 VAR_4->freezemsg = (char *) VAR_7;
 *VAR_4->freezemsg = 0;

 VAR_5 = (char *) VAR_7 - (char *) VAR_4->pioavailregs_dma;
 VAR_4->freezelen = VAR_3 - VAR_5;

 VAR_5 = 0;

done:
 return VAR_5;
}
