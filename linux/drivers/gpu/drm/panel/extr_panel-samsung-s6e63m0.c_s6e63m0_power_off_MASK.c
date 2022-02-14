
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e63m0 {int supplies; int reset_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct s6e63m0 *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0->reset_gpio, 1);
 FUNC_2(120);

 VAR_1 = FUNC_3(FUNC_0(VAR_0->supplies), VAR_0->supplies);
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
