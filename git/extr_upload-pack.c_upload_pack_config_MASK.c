
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char const*,char const*,char*) ;
 void* VAR_10 ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_11, const char *VAR_12, void *VAR_13)
{
 if (!FUNC_5("uploadpack.allowtipsha1inwant", VAR_11)) {
  if (FUNC_1(VAR_11, VAR_12))
   VAR_7 |= VAR_2;
  else
   VAR_7 &= ~VAR_2;
 } else if (!FUNC_5("uploadpack.allowreachablesha1inwant", VAR_11)) {
  if (FUNC_1(VAR_11, VAR_12))
   VAR_7 |= VAR_1;
  else
   VAR_7 &= ~VAR_1;
 } else if (!FUNC_5("uploadpack.allowanysha1inwant", VAR_11)) {
  if (FUNC_1(VAR_11, VAR_12))
   VAR_7 |= VAR_0;
  else
   VAR_7 &= ~VAR_0;
 } else if (!FUNC_5("uploadpack.keepalive", VAR_11)) {
  VAR_8 = FUNC_2(VAR_11, VAR_12);
  if (!VAR_8)
   VAR_8 = -1;
 } else if (!FUNC_5("uploadpack.allowfilter", VAR_11)) {
  VAR_4 = FUNC_1(VAR_11, VAR_12);
 } else if (!FUNC_5("uploadpack.allowrefinwant", VAR_11)) {
  VAR_5 = FUNC_1(VAR_11, VAR_12);
 } else if (!FUNC_5("uploadpack.allowsidebandall", VAR_11)) {
  VAR_6 = FUNC_1(VAR_11, VAR_12);
 } else if (!FUNC_5("core.precomposeunicode", VAR_11)) {
  VAR_10 = FUNC_1(VAR_11, VAR_12);
 }

 if (FUNC_0() != VAR_3) {
  if (!FUNC_5("uploadpack.packobjectshook", VAR_11))
   return FUNC_3(&VAR_9, VAR_11, VAR_12);
 }

 return FUNC_4(VAR_11, VAR_12, "uploadpack");
}
