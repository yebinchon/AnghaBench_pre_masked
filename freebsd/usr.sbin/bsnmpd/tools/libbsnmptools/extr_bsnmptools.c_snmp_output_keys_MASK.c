
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {char* sec_name; scalar_t__ auth_proto; int* auth_key; scalar_t__ priv_proto; int* priv_key; } ;
struct TYPE_4__ {TYPE_1__ user; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_2__ VAR_11 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_12 ;

void
FUNC_2(void)
{
 uint32_t VAR_13, VAR_14 = 0;
 char *VAR_15, VAR_16[2 * VAR_4 + 2];

 FUNC_0(VAR_12, "Localized keys for %s\n", VAR_11.user.sec_name);
 if (VAR_11.user.auth_proto == VAR_2) {
  FUNC_0(VAR_12, "MD5 : 0x");
  VAR_14 = VAR_0;
 } else if (VAR_11.user.auth_proto == VAR_3) {
  FUNC_0(VAR_12, "SHA : 0x");
  VAR_14 = VAR_1;
 }
 if (VAR_11.user.auth_proto != VAR_5) {
  VAR_15 = VAR_16;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   VAR_15 += FUNC_1(VAR_15, "%.2x",
       VAR_11.user.auth_key[VAR_13]);
  *VAR_15++ = '\0';
  FUNC_0(VAR_12, "%s\n", VAR_16);
 }

 if (VAR_11.user.priv_proto == VAR_8) {
  FUNC_0(VAR_12, "DES : 0x");
  VAR_14 = VAR_9;
 } else if (VAR_11.user.priv_proto == VAR_6) {
  FUNC_0(VAR_12, "AES : 0x");
  VAR_14 = VAR_7;
 }
 if (VAR_11.user.priv_proto != VAR_10) {
  VAR_15 = VAR_16;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   VAR_15 += FUNC_1(VAR_15, "%.2x",
       VAR_11.user.priv_key[VAR_13]);
  *VAR_15++ = '\0';
  FUNC_0(VAR_12, "%s\n", VAR_16);
 }
}
