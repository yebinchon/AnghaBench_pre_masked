
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stb0899_state {int verbose; TYPE_1__* config; } ;
struct TYPE_2__ {int xtal_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,int,int) ;
 int FUNC_1 (struct stb0899_state*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct stb0899_state *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_3 = (VAR_4 + 1) * VAR_2->config->xtal_freq / 6;
 FUNC_0(VAR_2->verbose, VAR_0, 1, "div=%d, mclk=%d", VAR_4, VAR_3);

 return VAR_3;
}
