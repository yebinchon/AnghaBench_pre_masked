
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct number {int scale; int number; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct number*) ;
 struct number* FUNC_3 () ;
 int FUNC_4 (struct number const*,int ,int ) ;

__attribute__((used)) static u_int
FUNC_5(const struct number *VAR_0)
{
 struct number *VAR_1, *VAR_2;
 u_int VAR_3;

 if (FUNC_1(VAR_0->number))
  return VAR_0->scale ? VAR_0->scale : 1;

 VAR_1 = FUNC_3();
 VAR_2 = FUNC_3();
 VAR_2->scale = VAR_0->scale;
 FUNC_4(VAR_0, VAR_1->number, VAR_2->number);

 VAR_3 = 0;
 while (!FUNC_1(VAR_1->number)) {
  FUNC_0(VAR_1->number, 10);
  VAR_3++;
 }
 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
 return (VAR_3 + VAR_0->scale);
}
