
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {int dummy; } ;
struct TYPE_2__ {int locality; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static bool FUNC_2(struct tpm_chip *VAR_3, int VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_0(VAR_4), &VAR_5, 1);
 if (VAR_6 < 0)
  return 0;

 if ((VAR_5 & (VAR_0 | VAR_1)) ==
     (VAR_0 | VAR_1)) {
  VAR_2.locality = VAR_4;
  return 1;
 }

 return 0;
}
