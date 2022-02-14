
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tpm_chip {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int locality; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = 0;
 ssize_t VAR_7;
 u8 VAR_8 = 0;
 int VAR_9;

 while (VAR_6 < VAR_5) {
  VAR_7 = FUNC_1(VAR_3);


  if (VAR_7 < 0)
   return VAR_7;


  if (VAR_7 > (VAR_5 - VAR_6))
   VAR_7 = VAR_5 - VAR_6;

  VAR_9 = FUNC_2(FUNC_0(VAR_2.locality),
      &(VAR_4[VAR_6]), VAR_7);
  if (VAR_9 == 0)
   VAR_6 += VAR_7;
  else if (VAR_9 < 0)
   VAR_8++;


  if (VAR_8 > VAR_1)
   return -VAR_0;
 }
 return VAR_6;
}
