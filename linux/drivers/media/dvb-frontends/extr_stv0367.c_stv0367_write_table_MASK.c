
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0367_state {int dummy; } ;
struct st_register {int value; int addr; } ;


 int FUNC_0 (struct stv0367_state*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct stv0367_state *VAR_0,
    const struct st_register *VAR_1)
{
 int VAR_2 = 0;

 while (1) {
  if (!VAR_1[VAR_2].addr)
   break;
  FUNC_0(VAR_0, VAR_1[VAR_2].addr, VAR_1[VAR_2].value);
  VAR_2++;
 }
}
