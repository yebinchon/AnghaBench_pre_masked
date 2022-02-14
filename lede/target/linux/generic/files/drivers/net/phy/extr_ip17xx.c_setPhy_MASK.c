
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct ip17xx_state {int dummy; } ;
struct TYPE_5__ {int m; int p; } ;
typedef TYPE_1__ reg ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct ip17xx_state*,TYPE_1__) ;
 int FUNC_2 (struct ip17xx_state*,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ip17xx_state *VAR_1, reg VAR_2, u16 VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_2))
  return -VAR_0;
 VAR_4 = FUNC_2(VAR_1, VAR_2.p, VAR_2.m, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_3(2);
 FUNC_1(VAR_1, VAR_2);
 return 0;
}
