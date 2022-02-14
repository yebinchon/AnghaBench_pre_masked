
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int * tx; int us; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct sca3000_state *VAR_0, u8 VAR_1, u8 VAR_2)
{
 VAR_0->tx[0] = FUNC_0(VAR_1);
 VAR_0->tx[1] = VAR_2;
 return FUNC_1(VAR_0->us, VAR_0->tx, 2);
}
