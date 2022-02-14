
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ option; int push; int nobracket; int refname; } ;
struct TYPE_5__ {TYPE_1__ remote_ref; } ;
struct used_atom {TYPE_2__ u; } ;
struct branch {int dummy; } ;
struct TYPE_6__ {char const* gone; int ahead_behind; int ahead; int behind; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (void*) ;
 TYPE_3__ VAR_6 ;
 char* FUNC_2 (struct branch*,int*) ;
 char* FUNC_3 (struct branch*,int*) ;
 char* FUNC_4 (struct branch*,int ,int*) ;
 char* FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (struct branch*,int*,int*,int *,int ,int ) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(struct used_atom *VAR_7, const char *VAR_8,
        struct branch *VAR_9, const char **VAR_10)
{
 int VAR_11, VAR_12;
 if (VAR_7->u.remote_ref.option == VAR_1)
  *VAR_10 = FUNC_5(&VAR_7->u.remote_ref.refname, VAR_8);
 else if (VAR_7->u.remote_ref.option == VAR_4) {
  if (FUNC_6(VAR_9, &VAR_11, &VAR_12,
           ((void*)0), VAR_7->u.remote_ref.push,
           VAR_0) < 0) {
   *VAR_10 = FUNC_7(VAR_6.gone);
  } else if (!VAR_11 && !VAR_12)
   *VAR_10 = FUNC_7("");
  else if (!VAR_11)
   *VAR_10 = FUNC_8(VAR_6.behind, VAR_12);
  else if (!VAR_12)
   *VAR_10 = FUNC_8(VAR_6.ahead, VAR_11);
  else
   *VAR_10 = FUNC_8(VAR_6.ahead_behind,
         VAR_11, VAR_12);
  if (!VAR_7->u.remote_ref.nobracket && *VAR_10[0]) {
   const char *VAR_13 = *VAR_10;
   *VAR_10 = FUNC_8("[%s]", *VAR_10);
   FUNC_1((void *)VAR_13);
  }
 } else if (VAR_7->u.remote_ref.option == VAR_5) {
  if (FUNC_6(VAR_9, &VAR_11, &VAR_12,
           ((void*)0), VAR_7->u.remote_ref.push,
           VAR_0) < 0) {
   *VAR_10 = FUNC_7("");
   return;
  }
  if (!VAR_11 && !VAR_12)
   *VAR_10 = FUNC_7("=");
  else if (!VAR_11)
   *VAR_10 = FUNC_7("<");
  else if (!VAR_12)
   *VAR_10 = FUNC_7(">");
  else
   *VAR_10 = FUNC_7("<>");
 } else if (VAR_7->u.remote_ref.option == VAR_2) {
  int VAR_14;
  const char *VAR_15 = VAR_7->u.remote_ref.push ?
   FUNC_2(VAR_9, &VAR_14) :
   FUNC_3(VAR_9, &VAR_14);
  *VAR_10 = FUNC_7(VAR_14 ? VAR_15 : "");
 } else if (VAR_7->u.remote_ref.option == VAR_3) {
  int VAR_16;
  const char *VAR_17;

  VAR_17 = FUNC_4(VAR_9, VAR_7->u.remote_ref.push,
           &VAR_16);
  *VAR_10 = FUNC_7(VAR_16 ? VAR_17 : "");
 } else
  FUNC_0("unhandled RR_* enum");
}
