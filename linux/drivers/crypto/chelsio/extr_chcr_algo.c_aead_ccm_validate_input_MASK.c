
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chcr_aead_ctx {int dummy; } ;
struct aead_request {int assoclen; int iv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(unsigned short VAR_2,
       struct aead_request *VAR_3,
       struct chcr_aead_ctx *VAR_4,
       unsigned int VAR_5)
{
 if (VAR_5 != VAR_0) {
  if (FUNC_0(VAR_3->iv)) {
   FUNC_1("CCM: IV check fails\n");
   return -VAR_1;
  }
 } else {
  if (VAR_3->assoclen != 16 && VAR_3->assoclen != 20) {
   FUNC_1("RFC4309: Invalid AAD length %d\n",
          VAR_3->assoclen);
   return -VAR_1;
  }
 }
 return 0;
}
