
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int* chunks; int num_chunks; } ;
typedef TYPE_1__ sctp_auth_chklist_t ;


 int FUNC_0 (int ,char*,size_t,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

int
FUNC_1(uint8_t VAR_5, sctp_auth_chklist_t *VAR_6)
{
 if (VAR_6 == ((void*)0))
  return (-1);


 if ((VAR_5 == VAR_2) ||
     (VAR_5 == VAR_3) ||
     (VAR_5 == VAR_4) ||
     (VAR_5 == VAR_0)) {
  return (-1);
 }
 if (VAR_6->chunks[VAR_5] == 0) {
  VAR_6->chunks[VAR_5] = 1;
  VAR_6->num_chunks++;
  FUNC_0(VAR_1,
      "SCTP: added chunk %u (0x%02x) to Auth list\n",
      VAR_5, VAR_5);
 }
 return (0);
}
