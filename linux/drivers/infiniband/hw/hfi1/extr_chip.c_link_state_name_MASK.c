
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char const* const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(u32 VAR_0)
{
 const char *VAR_1;
 int VAR_2 = FUNC_1(VAR_0);
 static const char * const VAR_3[] = {
  [129] = "INIT",
  [130] = "ARMED",
  [131] = "ACTIVE",
  [137] = "DOWNDEF",
  [135] = "POLL",
  [138] = "DISABLE",
  [136] = "OFFLINE",
  [128] = "VERIFY_CAP",
  [133] = "GOING_UP",
  [134] = "GOING_OFFLINE",
  [132] = "LINK_COOLDOWN"
 };

 VAR_1 = VAR_2 < FUNC_0(VAR_3) ? VAR_3[VAR_2] : ((void*)0);
 return VAR_1 ? VAR_1 : "unknown";
}
