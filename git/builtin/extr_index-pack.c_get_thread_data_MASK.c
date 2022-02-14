
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_local {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct thread_local VAR_2 ;
 struct thread_local* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline struct thread_local *FUNC_2(void)
{
 if (VAR_0) {
  if (VAR_3)
   return FUNC_1(VAR_1);
  FUNC_0(!VAR_3 &&
         "This should only be reached when all threads are gone");
 }
 return &VAR_2;
}
