
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_9 ;
 void* FUNC_1 (char const*,char const*) ;
 void* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const**,char const*,char const*) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*,char const*,void*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*,char const*,char*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 scalar_t__ FUNC_11 (char const*,char*,char const**) ;
 int FUNC_12 (TYPE_1__*,char*,char,char const*,...) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_14 (char*,char const*) ;

__attribute__((used)) static int FUNC_15(const char *VAR_19, const char *VAR_20, void *VAR_21)
{
 int VAR_22 = FUNC_10(VAR_19, VAR_20, "receive");

 if (VAR_22)
  return VAR_22;

 if (FUNC_13(VAR_19, "receive.denydeletes") == 0) {
  VAR_7 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.denynonfastforwards") == 0) {
  VAR_8 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.unpacklimit") == 0) {
  VAR_15 = FUNC_2(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "transfer.unpacklimit") == 0) {
  VAR_18 = FUNC_2(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.fsck.skiplist") == 0) {
  const char *VAR_23;

  if (FUNC_4(&VAR_23, VAR_19, VAR_20))
   return 1;
  FUNC_12(&VAR_9, "%cskiplist=%s",
   VAR_9.len ? ',' : '=', VAR_23);
  FUNC_0((char *)VAR_23);
  return 0;
 }

 if (FUNC_11(VAR_19, "receive.fsck.", &VAR_19)) {
  if (FUNC_8(VAR_19, VAR_20))
   FUNC_12(&VAR_9, "%c%s=%s",
    VAR_9.len ? ',' : '=', VAR_19, VAR_20);
  else
   FUNC_14("Skipping unknown msg id '%s'", VAR_19);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.fsckobjects") == 0) {
  VAR_14 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "transfer.fsckobjects") == 0) {
  VAR_17 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (!FUNC_13(VAR_19, "receive.denycurrentbranch")) {
  VAR_5 = FUNC_9(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.denydeletecurrent") == 0) {
  VAR_6 = FUNC_9(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "repack.usedeltabaseoffset") == 0) {
  VAR_13 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.updateserverinfo") == 0) {
  VAR_3 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.autogc") == 0) {
  VAR_2 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.shallowupdate") == 0) {
  VAR_16 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.certnonceseed") == 0)
  return FUNC_5(&VAR_4, VAR_19, VAR_20);

 if (FUNC_13(VAR_19, "receive.certnonceslop") == 0) {
  VAR_12 = FUNC_6(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.advertiseatomic") == 0) {
  VAR_0 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.advertisepushoptions") == 0) {
  VAR_1 = FUNC_1(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.keepalive") == 0) {
  VAR_10 = FUNC_2(VAR_19, VAR_20);
  return 0;
 }

 if (FUNC_13(VAR_19, "receive.maxinputsize") == 0) {
  VAR_11 = FUNC_3(VAR_19, VAR_20);
  return 0;
 }

 return FUNC_7(VAR_19, VAR_20, VAR_21);
}
