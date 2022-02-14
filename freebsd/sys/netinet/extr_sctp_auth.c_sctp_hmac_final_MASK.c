
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int sha256; int sha1; } ;
typedef TYPE_1__ sctp_hash_context_t ;





 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(uint16_t VAR_0, sctp_hash_context_t *VAR_1,
    uint8_t *VAR_2)
{
 switch (VAR_0) {
 case 129:
  FUNC_0(VAR_2, &VAR_1->sha1);
  break;
 case 128:
  FUNC_1(VAR_2, &VAR_1->sha256);
  break;
 case 130:
 default:

  return;
 }
}
