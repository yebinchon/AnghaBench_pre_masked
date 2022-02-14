
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct qca_vreg {scalar_t__ load_uA; int max_uV; int min_uV; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*,scalar_t__) ;
 int FUNC_2 (struct regulator*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qca_vreg VAR_0,
    struct regulator *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0.min_uV,
        VAR_0.max_uV);
 if (VAR_2)
  return VAR_2;

 if (VAR_0.load_uA)
  VAR_2 = FUNC_1(VAR_1,
      VAR_0.load_uA);

 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_1);

}
