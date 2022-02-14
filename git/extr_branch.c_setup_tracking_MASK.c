
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tracking ;
struct TYPE_2__ {char* dst; } ;
struct tracking {int matches; char const* src; int remote; TYPE_1__ spec; } ;
typedef enum branch_track { ____Placeholder_branch_track } branch_track ;


 int VAR_0 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,struct tracking*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int,char const*,int ,char const*) ;
 int FUNC_6 (struct tracking*,int ,int) ;

__attribute__((used)) static void FUNC_7(const char *VAR_2, const char *VAR_3,
      enum branch_track VAR_4, int VAR_5)
{
 struct tracking VAR_6;
 int VAR_7 = VAR_5 ? 0 : VAR_0;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.spec.dst = (char *)VAR_3;
 if (FUNC_3(VAR_1, &VAR_6))
  return;

 if (!VAR_6.matches)
  switch (VAR_4) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   return;
  }

 if (VAR_6.matches > 1)
  FUNC_1(FUNC_0("Not tracking: ambiguous information for ref %s"),
      VAR_3);

 if (FUNC_5(VAR_7, VAR_2, VAR_6.remote,
         VAR_6.src ? VAR_6.src : VAR_3) < 0)
  FUNC_2(-1);

 FUNC_4(VAR_6.src);
}
