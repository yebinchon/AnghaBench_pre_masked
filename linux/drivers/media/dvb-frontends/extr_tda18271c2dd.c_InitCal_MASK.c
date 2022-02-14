
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda_state {int dummy; } ;


 int FUNC_0 (struct tda_state*) ;
 int FUNC_1 (struct tda_state*) ;
 int FUNC_2 (struct tda_state*) ;

__attribute__((used)) static int FUNC_3(struct tda_state *VAR_0)
{
 int VAR_1 = 0;

 do {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 < 0)
   break;
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1 < 0)
   break;

 } while (0);
 return VAR_1;
}
