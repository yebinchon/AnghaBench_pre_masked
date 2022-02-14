
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {int tolerant; int monarch_timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char const*,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(u64 *VAR_4, const char *VAR_5)
{






 FUNC_2();
 if (FUNC_0(&VAR_3))
  FUNC_4();
 if (!VAR_2.monarch_timeout)
  goto out;
 if ((s64)*VAR_4 < VAR_0) {
  if (VAR_2.tolerant <= 1)
   FUNC_1(VAR_5, ((void*)0), ((void*)0));
  VAR_1 = 1;
  return 1;
 }
 *VAR_4 -= VAR_0;
out:
 FUNC_3();
 return 0;
}
