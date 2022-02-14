
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_prg {int id; int dev; int iomuxc_gpr; TYPE_1__* chan; int * pres; } ;
struct TYPE_2__ {int used_pre; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct ipu_prg *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;


 if (VAR_2 == 0) {
  VAR_4 = FUNC_1(VAR_1->pres[0]);
  if (VAR_4)
   goto fail;
  VAR_1->chan[VAR_2].used_pre = 0;
  return 0;
 }

 for (VAR_3 = 1; VAR_3 < 3; VAR_3++) {
  VAR_4 = FUNC_1(VAR_1->pres[VAR_3]);
  if (!VAR_4) {
   u32 VAR_5, VAR_6;
   int VAR_7;

   VAR_1->chan[VAR_2].used_pre = VAR_3;


   VAR_7 = (VAR_3 == 1) ? 12 : 14;
   VAR_6 = (VAR_1->id << 1) | (VAR_2 - 1);
   FUNC_3(VAR_1->iomuxc_gpr, VAR_0,
        0x3 << VAR_7, VAR_6 << VAR_7);


   VAR_7 = (VAR_3 == 1) ? 14 : 12;
   FUNC_2(VAR_1->iomuxc_gpr, VAR_0, &VAR_5);
   if (((VAR_5 >> VAR_7) & 0x3) == VAR_6) {
    FUNC_3(VAR_1->iomuxc_gpr, VAR_0,
         0x3 << VAR_7,
         (VAR_6 ^ 0x1) << VAR_7);
   }

   return 0;
  }
 }

fail:
 FUNC_0(VAR_1->dev, "could not get PRE for PRG chan %d", VAR_2);
 return VAR_4;
}
