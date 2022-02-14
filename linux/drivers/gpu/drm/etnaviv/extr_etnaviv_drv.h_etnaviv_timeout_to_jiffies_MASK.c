
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct timespec {int dummy; } ;


 int FUNC_0 (struct timespec64*) ;
 scalar_t__ FUNC_1 (struct timespec64*,struct timespec64*) ;
 struct timespec64 FUNC_2 (struct timespec64,struct timespec64) ;
 unsigned long FUNC_3 (struct timespec64*) ;
 struct timespec64 FUNC_4 (struct timespec const) ;

__attribute__((used)) static inline unsigned long FUNC_5(
 const struct timespec *VAR_0)
{
 struct timespec64 VAR_1, VAR_2;

 VAR_2 = FUNC_4(*VAR_0);

 FUNC_0(&VAR_1);


 if (FUNC_1(&VAR_2, &VAR_1) <= 0)
  return 0;

 VAR_1 = FUNC_2(VAR_2, VAR_1);

 return FUNC_3(&VAR_1);
}
