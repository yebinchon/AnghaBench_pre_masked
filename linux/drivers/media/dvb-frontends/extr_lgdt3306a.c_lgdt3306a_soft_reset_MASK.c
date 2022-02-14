
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lgdt3306a_state *VAR_0)
{
 int VAR_1;

 FUNC_0("\n");

 VAR_1 = FUNC_2(VAR_0, 0x0000, 7, 0);
 if (FUNC_1(VAR_1))
  goto fail;

 FUNC_3(20);
 VAR_1 = FUNC_2(VAR_0, 0x0000, 7, 1);
 FUNC_1(VAR_1);

fail:
 return VAR_1;
}
