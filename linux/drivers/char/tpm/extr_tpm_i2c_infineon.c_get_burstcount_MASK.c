
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tpm_chip {unsigned long timeout_d; } ;
typedef int ssize_t ;
struct TYPE_2__ {int locality; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct tpm_chip *VAR_5)
{
 unsigned long VAR_6;
 ssize_t VAR_7;
 u8 VAR_8[3];



 VAR_6 = VAR_3 + VAR_5->timeout_d;
 do {

  if (FUNC_1(FUNC_0(VAR_4.locality)+1, VAR_8, 3) < 0)
   VAR_7 = 0;
  else
   VAR_7 = (VAR_8[2] << 16) + (VAR_8[1] << 8) + VAR_8[0];

  if (VAR_7)
   return VAR_7;

  FUNC_3(VAR_2, VAR_1);
 } while (FUNC_2(VAR_3, VAR_6));
 return -VAR_0;
}
