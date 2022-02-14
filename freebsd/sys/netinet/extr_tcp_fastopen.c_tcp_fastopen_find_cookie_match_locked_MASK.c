
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {unsigned int newest_psk; int * psk; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_2(uint8_t *VAR_5, uint64_t *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 uint64_t VAR_9;

 if (VAR_4) {
  VAR_8 = VAR_2.newest_psk;
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   VAR_9 =
       FUNC_1(
     VAR_2.psk[VAR_8],
     (uint8_t *)VAR_6,
     VAR_0);

   if (FUNC_0(VAR_5, &VAR_9,
       VAR_0) == 0)
    return (1);

   if (VAR_8 == 0)
    VAR_8 = VAR_1 - 1;
   else
    VAR_8--;
  }
 } else if (FUNC_0(VAR_5, VAR_6, VAR_0) == 0)
  return (1);

 return (0);
}
