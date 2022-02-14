
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int num_chunks; scalar_t__* chunks; } ;
typedef TYPE_1__ sctp_auth_chklist_t ;



int
FUNC_0(const sctp_auth_chklist_t *VAR_0, uint8_t *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 if (VAR_0 == ((void*)0))
  return (0);

 if (VAR_0->num_chunks <= 32) {

  for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
   if (VAR_0->chunks[VAR_2] != 0) {
    *VAR_1++ = VAR_2;
    VAR_3++;
   }
  }
 } else {
  int VAR_4, VAR_5;


  for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
   if (VAR_0->chunks[VAR_2] != 0) {
    VAR_4 = VAR_2 / 8;
    VAR_5 = VAR_2 % 8;
    VAR_1[VAR_4] |= (1 << VAR_5);
   }
  }
  VAR_3 = 32;
 }
 return (VAR_3);
}
