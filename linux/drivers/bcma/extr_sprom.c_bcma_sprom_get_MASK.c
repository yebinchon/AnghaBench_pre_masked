
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int core; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct bcma_bus {int sprom; TYPE_2__ drv_cc; TYPE_1__ chipinfo; } ;


 int FUNC_0 (size_t const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct bcma_bus*,char*,int ) ;
 int FUNC_3 (struct bcma_bus*,int *) ;
 int FUNC_4 (struct bcma_bus*) ;
 int FUNC_5 (struct bcma_bus*,int *) ;
 int FUNC_6 (struct bcma_bus*) ;
 int FUNC_7 (struct bcma_bus*) ;
 int FUNC_8 (struct bcma_bus*,int ,int *,size_t) ;
 int FUNC_9 (struct bcma_bus*,int *,size_t) ;
 int FUNC_10 (struct bcma_bus*,char*) ;
 int * FUNC_11 (size_t,int,int ) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct bcma_bus *VAR_6)
{
 u16 VAR_7 = VAR_0;
 u16 *VAR_8;
 static const size_t VAR_9[] = {
  128,
  130,
  129,
 };
 int VAR_10, VAR_11 = 0;

 if (!VAR_6->drv_cc.core)
  return -VAR_4;

 if (!FUNC_4(VAR_6)) {
  bool VAR_12;






  VAR_12 = FUNC_6(VAR_6);
  if (VAR_12) {

   VAR_7 = FUNC_7(VAR_6);
  }
  if (!VAR_7 || !VAR_12) {





   VAR_11 = FUNC_3(VAR_6, &VAR_6->sprom);
   return VAR_11;
  }
 }

 if (VAR_6->chipinfo.id == VAR_1 ||
     VAR_6->chipinfo.id == VAR_2)
  FUNC_1(&VAR_6->drv_cc, 0);

 FUNC_2(VAR_6, "SPROM offset 0x%x\n", VAR_7);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_9); VAR_10++) {
  size_t VAR_13 = VAR_9[VAR_10];

  VAR_8 = FUNC_11(VAR_13, sizeof(u16), VAR_5);
  if (!VAR_8)
   return -VAR_3;

  FUNC_8(VAR_6, VAR_7, VAR_8, VAR_13);
  VAR_11 = FUNC_9(VAR_6, VAR_8, VAR_13);
  if (!VAR_11)
   break;

  FUNC_12(VAR_8);
 }

 if (VAR_6->chipinfo.id == VAR_1 ||
     VAR_6->chipinfo.id == VAR_2)
  FUNC_1(&VAR_6->drv_cc, 1);

 if (VAR_11) {
  FUNC_10(VAR_6, "Invalid SPROM read from the PCIe card, trying to use fallback SPROM\n");
  VAR_11 = FUNC_3(VAR_6, &VAR_6->sprom);
 } else {
  FUNC_5(VAR_6, VAR_8);
  FUNC_12(VAR_8);
 }

 return VAR_11;
}
