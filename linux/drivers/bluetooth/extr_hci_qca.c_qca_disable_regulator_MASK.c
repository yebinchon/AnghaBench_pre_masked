
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct qca_vreg {scalar_t__ load_uA; int max_uV; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*,int ) ;
 int FUNC_2 (struct regulator*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qca_vreg VAR_0,
      struct regulator *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, 0, VAR_0.max_uV);
 if (VAR_0.load_uA)
  FUNC_1(VAR_1, 0);

}
