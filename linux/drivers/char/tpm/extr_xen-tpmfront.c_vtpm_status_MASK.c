
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_private {TYPE_1__* shr; } ;
struct tpm_chip {int dev; } ;
struct TYPE_2__ {int state; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tpm_private* FUNC_0 (int *) ;

__attribute__((used)) static u8 FUNC_1(struct tpm_chip *VAR_4)
{
 struct tpm_private *VAR_5 = FUNC_0(&VAR_4->dev);
 switch (VAR_5->shr->state) {
 case 129:
  return VAR_1 | VAR_0;
 case 130:
  return VAR_1 | VAR_2;
 case 128:
 case 131:
  return VAR_3;
 default:
  return 0;
 }
}
