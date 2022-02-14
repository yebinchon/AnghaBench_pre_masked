
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pmcmsptwi_data {int last_result; scalar_t__ iobase; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pmcmsptwi_data *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  u32 VAR_8 = FUNC_2(VAR_6->iobase +
      VAR_2);
  if (VAR_8 == 0) {
   u32 VAR_9 = FUNC_2(VAR_6->iobase +
      VAR_3);
   FUNC_3(VAR_9, VAR_6->iobase +
      VAR_3);
   VAR_6->last_result = FUNC_1(VAR_9);
   return;
  }
  FUNC_4(VAR_1);
 }

 FUNC_0(&VAR_5.dev, "Result: Poll timeout\n");
 VAR_6->last_result = VAR_4;
}
