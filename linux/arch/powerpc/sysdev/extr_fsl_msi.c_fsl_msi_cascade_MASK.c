
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_msi_cascade_data {int index; struct fsl_msi* msi_data; } ;
struct fsl_msi {int feature; int irqhost; int msi_regs; } ;
typedef int irqreturn_t ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fsl_msi*,int,int) ;
 int FUNC_6 (char*,int,unsigned int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 unsigned int VAR_6;
 struct fsl_msi *VAR_7;
 int VAR_8 = -1;
 u32 VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11 = 0;
 struct fsl_msi_cascade_data *VAR_12 = VAR_5;
 irqreturn_t VAR_13 = VAR_2;

 VAR_7 = VAR_12->msi_data;

 VAR_8 = VAR_12->index;

 if (VAR_8 >= VAR_3)
  VAR_6 = 0;

 switch (VAR_7->feature & VAR_0) {
 case 129:
  VAR_9 = FUNC_2(VAR_7->msi_regs,
   VAR_8 * 0x10);
  break;
 case 130:
  VAR_9 = FUNC_2(VAR_7->msi_regs, VAR_8 * 0x4);
  break;
 }

 while (VAR_9) {
  VAR_10 = FUNC_0(VAR_9) - 1;

  VAR_6 = FUNC_4(VAR_7->irqhost,
    FUNC_5(VAR_7, VAR_8,
       VAR_10 + VAR_11));
  if (VAR_6) {
   FUNC_3(VAR_6);
   VAR_13 = VAR_1;
  }
  VAR_11 += VAR_10 + 1;
  VAR_9 = VAR_9 >> (VAR_10 + 1);
 }

 return VAR_13;
}
