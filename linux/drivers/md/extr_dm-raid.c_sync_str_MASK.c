
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sync_state { ____Placeholder_sync_state } sync_state ;


 scalar_t__ FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int,int ,scalar_t__) ;

__attribute__((used)) static const char *FUNC_2(enum sync_state VAR_0)
{

 static const char *VAR_1[] = {
  "frozen",
  "reshape",
  "resync",
  "check",
  "repair",
  "recover",
  "idle"
 };

 return FUNC_1(VAR_0, 0, FUNC_0(VAR_1) - 1) ? VAR_1[VAR_0] : "undef";
}
