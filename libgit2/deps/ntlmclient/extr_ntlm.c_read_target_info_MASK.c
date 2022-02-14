
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ntlm_client ;
struct TYPE_5__ {int len; int pos; } ;
typedef TYPE_1__ ntlm_buf ;







 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int*,int *,TYPE_1__*) ;
 int FUNC_2 (char**,int *,TYPE_1__*,int,int) ;

__attribute__((used)) static inline bool FUNC_3(
 char **VAR_0,
 char **VAR_1,
 char **VAR_2,
 char **VAR_3,
 ntlm_client *VAR_4,
 ntlm_buf *VAR_5,
 bool VAR_6)
{
 uint16_t VAR_7, VAR_8;
 bool VAR_9 = 0;

 *VAR_0 = ((void*)0);
 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);

 while (!VAR_9 && (VAR_5->len - VAR_5->pos) >= 4) {
  if (!FUNC_1(&VAR_7, VAR_4, VAR_5) ||
   !FUNC_1(&VAR_8, VAR_4, VAR_5)) {
   FUNC_0(VAR_4, "truncated target info block");
   return 0;
  }

  if (!VAR_7 && VAR_8) {
   FUNC_0(VAR_4, "invalid target info block");
   return -1;
  }

  switch (VAR_7) {
  case 132:
   if (!FUNC_2(VAR_1, VAR_4, VAR_5, VAR_8, VAR_6))
    return -1;
   break;
  case 129:
   if (!FUNC_2(VAR_0, VAR_4, VAR_5, VAR_8, VAR_6))
    return -1;
   break;
  case 131:
   if (!FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8, VAR_6))
    return -1;
   break;
  case 128:
   if (!FUNC_2(VAR_2, VAR_4, VAR_5, VAR_8, VAR_6))
    return -1;
   break;
  case 130:
   VAR_9 = 1;
   break;
  default:
   FUNC_0(VAR_4, "unknown target info block type");
   return -1;
  }
 }

 if (VAR_5->len != VAR_5->pos) {
  FUNC_0(VAR_4,
   "invalid extra data in target info section");
  return 0;
 }

 return 1;
}
