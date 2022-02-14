
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ Uint8 ;
struct TYPE_2__ {int samplebits; scalar_t__ isfloat; scalar_t__ buffer; } ;
typedef scalar_t__ Sint16 ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__,int) ;
 int FUNC_1 (scalar_t__*,char,int) ;
 float VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(void *VAR_5, Uint8 *VAR_6, int VAR_7)
{
 int VAR_8 = (VAR_1 * (VAR_0.samplebits/8));
 if (VAR_8 >= VAR_2)
  VAR_1 = VAR_8 = 0;

 if (!VAR_4)
 {
  FUNC_1(VAR_6, '\0', VAR_7);
  return;
 }
 else
 {
  int VAR_9 = VAR_2 - VAR_8;
  int VAR_10 = VAR_7;
  int VAR_11 = 0;

  if (VAR_10 > VAR_9)
  {
   VAR_10 = VAR_9;
   VAR_11 = VAR_7 - VAR_10;
  }
  FUNC_0(VAR_6, VAR_0.buffer + VAR_8, VAR_10);
  if (VAR_11 <= 0)
   VAR_1 += (VAR_10 / (VAR_0.samplebits/8));
  else
  {
   FUNC_0(VAR_6+VAR_10, VAR_0.buffer, VAR_11);
   VAR_1 = (VAR_11 / (VAR_0.samplebits/8));
  }
 }

 if (VAR_1 >= VAR_2)
  VAR_1 = 0;
}
