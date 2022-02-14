
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 scalar_t__ FUNC_0 (int const*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const sigset_t *VAR_0, int VAR_1, char VAR_2)
{
 FUNC_1("{d:sigmember/%c}", FUNC_0(VAR_0, VAR_1) ? VAR_2 : '-');
 switch (VAR_2) {
  case 'B':
   FUNC_1("{en:mask/%s}", FUNC_0(VAR_0, VAR_1) ?
       "true" : "false");
   break;
  case 'C':
   FUNC_1("{en:catch/%s}", FUNC_0(VAR_0, VAR_1) ?
       "true" : "false");
   break;
  case 'P':
   FUNC_1("{en:list/%s}", FUNC_0(VAR_0, VAR_1) ?
       "true" : "false");
   break;
  case 'I':
   FUNC_1("{en:ignore/%s}", FUNC_0(VAR_0, VAR_1) ?
       "true" : "false");
   break;
  default:
   FUNC_1("{en:unknown/%s}", FUNC_0(VAR_0, VAR_1) ?
       "true" : "false");
   break;
 }
}
