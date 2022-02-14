
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct csession {int cipher; int mac; } ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct timeval*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct csession *VAR_1)
{
 static struct timeval VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 static struct timeval VAR_7, VAR_8;

 switch (VAR_1->cipher) {
 case 130:
  if (FUNC_1(&VAR_5, &VAR_0))
   FUNC_0(13, "DES cipher via /dev/crypto");
  break;
 case 134:
  if (FUNC_1(&VAR_8, &VAR_0))
   FUNC_0(13, "3DES cipher via /dev/crypto");
  break;
 case 132:
  if (FUNC_1(&VAR_3, &VAR_0))
   FUNC_0(13, "Blowfish cipher via /dev/crypto");
  break;
 case 131:
  if (FUNC_1(&VAR_4, &VAR_0))
   FUNC_0(13, "CAST128 cipher via /dev/crypto");
  break;
 case 128:
  if (FUNC_1(&VAR_7, &VAR_0))
   FUNC_0(13, "Skipjack cipher via /dev/crypto");
  break;
 case 133:
  if (FUNC_1(&VAR_2, &VAR_0))
   FUNC_0(13, "ARC4 cipher via /dev/crypto");
  break;
 }

 switch (VAR_1->mac) {
 case 129:
  if (FUNC_1(&VAR_6, &VAR_0))
   FUNC_0(13, "MD5-HMAC authenticator via /dev/crypto");
  break;
 }
}
