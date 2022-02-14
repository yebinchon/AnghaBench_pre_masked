
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dummy; } ;
struct TYPE_2__ {int locality; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static u8 FUNC_2(struct tpm_chip *VAR_1)
{

 u8 VAR_2 = 0xFF;
 u8 VAR_3 = 0;

 do {
  if (FUNC_1(FUNC_0(VAR_0.locality), &VAR_2, 1) < 0)
   return 0;

  VAR_3++;

 } while ((VAR_2 == 0xFF) && VAR_3 < 10);

 return VAR_2;
}
