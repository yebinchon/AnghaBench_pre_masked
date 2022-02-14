
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct string_list {scalar_t__ nr; } ;
struct packed_git {int dummy; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (struct string_list*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct packed_git*) ;
 struct packed_git* FUNC_3 (struct string_list*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (struct string_list*,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(void)
{




 if (VAR_3 <= 0)
  return 0;







 if (FUNC_7()) {
  struct string_list VAR_4 = VAR_0;

  if (VAR_1) {
   FUNC_3(&VAR_4, VAR_1);
   if (VAR_4.nr >= VAR_2) {
    VAR_1 = 0;
    FUNC_5(&VAR_4, 0);
    FUNC_3(&VAR_4, 0);
   }
  } else {
   struct packed_git *VAR_5 = FUNC_3(&VAR_4, 0);
   uint64_t VAR_6, VAR_7;

   VAR_6 = FUNC_8();
   VAR_7 = FUNC_2(VAR_5);






   if (!VAR_6 || VAR_7 < VAR_6 / 2)
    FUNC_5(&VAR_4, 0);
  }

  FUNC_0(&VAR_4);
  FUNC_5(&VAR_4, 0);
 } else if (FUNC_6())
  FUNC_1();
 else
  return 0;

 if (FUNC_4(((void*)0), "pre-auto-gc", ((void*)0)))
  return 0;
 return 1;
}
