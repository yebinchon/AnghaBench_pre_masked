
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10086_state {int dummy; } ;


 int FUNC_0 (struct tda10086_state*,int) ;
 int FUNC_1 (struct tda10086_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct tda10086_state *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = VAR_4 & ~VAR_2;
 VAR_4 |= VAR_3 & 0xff;


 return FUNC_1(VAR_0, VAR_1, VAR_4);
}
