
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int dummy; } ;
struct md_rdev {int dummy; } ;


 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (struct r5conf*,struct md_rdev*) ;

__attribute__((used)) static inline int FUNC_2(struct r5conf *VAR_0, struct md_rdev *VAR_1,
      bool VAR_2)
{
 if (VAR_1)
  return FUNC_1(VAR_0, VAR_1);
 else if (VAR_2)
  return FUNC_0(VAR_0);

 return 0;
}
