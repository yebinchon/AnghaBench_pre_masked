
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_device {int dummy; } ;
struct navpoint {int* data; int index; int dev; struct ssp_device* ssp; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct navpoint*) ;
 int FUNC_3 (struct ssp_device*,int ) ;
 int FUNC_4 (struct ssp_device*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct navpoint *VAR_8 = VAR_7;
 struct ssp_device *VAR_9 = VAR_8->ssp;
 irqreturn_t VAR_10 = VAR_1;
 u32 VAR_11;

 VAR_11 = FUNC_3(VAR_9, VAR_3);
 if (VAR_11 & VAR_5) {
  FUNC_1(VAR_8->dev,
    "unexpected interrupt: status=0x%08x\n", VAR_11);
  FUNC_4(VAR_9, VAR_3, (VAR_11 & VAR_5));
  VAR_10 = VAR_0;
 }

 while (VAR_11 & VAR_4) {
  u32 VAR_12;

  VAR_12 = FUNC_3(VAR_9, VAR_2);
  VAR_8->data[VAR_8->index + 0] = (VAR_12 >> 8);
  VAR_8->data[VAR_8->index + 1] = VAR_12;
  VAR_8->index += 2;
  if (FUNC_0(VAR_8->data[0]) < VAR_8->index) {
   FUNC_2(VAR_8);
   VAR_8->index = 0;
  }
  VAR_11 = FUNC_3(VAR_9, VAR_3);
  VAR_10 = VAR_0;
 }

 return VAR_10;
}
