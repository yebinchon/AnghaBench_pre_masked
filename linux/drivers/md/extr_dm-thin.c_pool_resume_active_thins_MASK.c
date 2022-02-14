
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int thin_md; } ;
struct pool {int dummy; } ;


 int FUNC_0 (int ) ;
 struct thin_c* FUNC_1 (struct pool*) ;
 struct thin_c* FUNC_2 (struct pool*,struct thin_c*) ;

__attribute__((used)) static void FUNC_3(struct pool *VAR_0)
{
 struct thin_c *VAR_1;


 VAR_1 = FUNC_1(VAR_0);
 while (VAR_1) {
  FUNC_0(VAR_1->thin_md);
  VAR_1 = FUNC_2(VAR_0, VAR_1);
 }
}
