
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__* key; } ;
typedef TYPE_1__ sctp_key_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(sctp_key_t *VAR_0, sctp_key_t *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4, VAR_5;
 uint8_t *VAR_6, *VAR_7;
 uint8_t VAR_8, VAR_9;


 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = FUNC_0(VAR_1);
 if ((VAR_4 == 0) && (VAR_5 == 0))
  return (0);
 else if (VAR_4 == 0)
  return (-1);
 else if (VAR_5 == 0)
  return (1);

 if (VAR_4 < VAR_5) {
  VAR_2 = VAR_5;
 } else {
  VAR_2 = VAR_4;
 }
 VAR_6 = VAR_0->key;
 VAR_7 = VAR_1->key;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {

  VAR_8 = (VAR_3 < (VAR_2 - VAR_4)) ? 0 : *(VAR_6++);
  VAR_9 = (VAR_3 < (VAR_2 - VAR_5)) ? 0 : *(VAR_7++);
  if (VAR_8 > VAR_9) {
   return (1);
  } else if (VAR_8 < VAR_9) {
   return (-1);
  }
 }

 if (VAR_4 == VAR_5)
  return (0);
 else if (VAR_4 < VAR_5)
  return (-1);
 else
  return (1);
}
