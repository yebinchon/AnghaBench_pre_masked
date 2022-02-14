
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {int spi_clock; } ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lg216x_state *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x0014, &VAR_1);
 if (FUNC_2(VAR_2))
  goto fail;

 VAR_1 &= 0xf3;
 VAR_1 |= (VAR_0->cfg->spi_clock << 2);

 VAR_2 = FUNC_1(VAR_0, 0x0014, VAR_1);
 FUNC_2(VAR_2);
fail:
 return VAR_2;
}
