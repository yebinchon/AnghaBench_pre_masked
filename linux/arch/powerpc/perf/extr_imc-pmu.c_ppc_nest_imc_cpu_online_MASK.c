
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct cpumask*,struct cpumask const*,int *) ;
 struct cpumask* FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (unsigned int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2)
{
 const struct cpumask *VAR_3;
 static struct cpumask VAR_4;
 int VAR_5;


 VAR_3 = FUNC_2(FUNC_0(VAR_2));





 if (FUNC_1(&VAR_4, VAR_3, &VAR_1))
  return 0;





 VAR_5 = FUNC_5(VAR_0,
         FUNC_4(VAR_2));
 if (VAR_5)
  return VAR_5;


 FUNC_3(VAR_2, &VAR_1);
 return 0;
}
