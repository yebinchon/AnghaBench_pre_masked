
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ if_khz; } ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct lg216x_state *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 FUNC_2("%d KHz\n", VAR_0->cfg->if_khz);

 VAR_2 = FUNC_0(VAR_0, 0x0132, &VAR_1);
 if (FUNC_3(VAR_2))
  goto fail;

 VAR_1 &= 0xfb;
 VAR_1 |= (0 == VAR_0->cfg->if_khz) ? 0x04 : 0x00;

 VAR_2 = FUNC_1(VAR_0, 0x0132, VAR_1);
 FUNC_3(VAR_2);


fail:
 return VAR_2;
}
