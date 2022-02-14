
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmcmsptwi_data {int wait; int last_result; scalar_t__ iobase; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct pmcmsptwi_data *VAR_7 = VAR_6;

 u32 VAR_8 = FUNC_3(VAR_7->iobase +
     VAR_3);
 FUNC_4(VAR_8, VAR_7->iobase + VAR_3);

 FUNC_1(&VAR_4.dev, "Got interrupt 0x%08x\n", VAR_8);
 if (!(VAR_8 & VAR_2))
  return VAR_1;

 VAR_7->last_result = FUNC_2(VAR_8);
 FUNC_0(&VAR_7->wait);

 return VAR_0;
}
