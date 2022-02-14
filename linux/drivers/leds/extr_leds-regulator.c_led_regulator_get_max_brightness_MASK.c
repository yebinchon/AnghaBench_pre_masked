
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*,int ) ;
 int FUNC_2 (struct regulator*,int,int) ;

__attribute__((used)) static inline int FUNC_3(struct regulator *VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_1(VAR_0, 0);

 if (VAR_2 <= 0)
  return 1;





 VAR_1 = FUNC_2(VAR_0, VAR_2, VAR_2);
 if (VAR_1 < 0)
  return 1;

 return FUNC_0(VAR_0);
}
