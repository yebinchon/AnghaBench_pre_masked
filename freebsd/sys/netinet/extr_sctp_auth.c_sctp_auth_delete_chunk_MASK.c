
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int* chunks; int num_chunks; } ;
typedef TYPE_1__ sctp_auth_chklist_t ;


 int FUNC_0 (int ,char*,size_t,size_t) ;
 int VAR_0 ;

int
FUNC_1(uint8_t VAR_1, sctp_auth_chklist_t *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return (-1);

 if (VAR_2->chunks[VAR_1] == 1) {
  VAR_2->chunks[VAR_1] = 0;
  VAR_2->num_chunks--;
  FUNC_0(VAR_0,
      "SCTP: deleted chunk %u (0x%02x) from Auth list\n",
      VAR_1, VAR_1);
 }
 return (0);
}
