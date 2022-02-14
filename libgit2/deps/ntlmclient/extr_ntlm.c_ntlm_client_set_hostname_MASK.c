
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int unicode_ctx; int hostname_utf16_len; int * hostname_utf16; int * hostdomain; int * hostname; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int **,int *,int ,char const*,int ) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

int FUNC_7(
 ntlm_client *VAR_0,
 const char *VAR_1,
 const char *VAR_2)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0->hostname);
 FUNC_1(VAR_0->hostdomain);
 FUNC_1(VAR_0->hostname_utf16);

 VAR_0->hostname = ((void*)0);
 VAR_0->hostdomain = ((void*)0);
 VAR_0->hostname_utf16 = ((void*)0);

 if (VAR_1 && (VAR_0->hostname = FUNC_4(VAR_1)) == ((void*)0)) {
  FUNC_2(VAR_0, "out of memory");
  return -1;
 }

 if (VAR_2 && (VAR_0->hostdomain = FUNC_4(VAR_2)) == ((void*)0)) {
  FUNC_2(VAR_0, "out of memory");
  return -1;
 }

 if (VAR_1 && FUNC_6(VAR_0) && !FUNC_3(
   &VAR_0->hostname_utf16,
   &VAR_0->hostname_utf16_len,
   VAR_0->unicode_ctx,
   VAR_1,
   FUNC_5(VAR_1)))
  return -1;

 return 0;
}
