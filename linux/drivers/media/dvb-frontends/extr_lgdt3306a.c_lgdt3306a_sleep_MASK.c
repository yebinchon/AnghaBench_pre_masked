
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int current_frequency; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int) ;
 int FUNC_3 (struct lgdt3306a_state*,int ) ;

__attribute__((used)) static int FUNC_4(struct lgdt3306a_state *VAR_0)
{
 int VAR_1;

 FUNC_0("\n");
 VAR_0->current_frequency = -1;

 VAR_1 = FUNC_2(VAR_0, 1);
 if (FUNC_1(VAR_1))
  goto fail;

 VAR_1 = FUNC_3(VAR_0, 0);
 FUNC_1(VAR_1);

fail:
 return 0;
}
