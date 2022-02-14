
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ prod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct lgs8gxx_state *VAR_1,
 u8 VAR_2)
{
 u8 VAR_3 = 0x73, VAR_4 = 0x90;

 if (VAR_1->config->prod != VAR_0)
  return 0;

 VAR_3 |= (VAR_2 & 0x01) << 7;
 VAR_4 |= (VAR_2 & 0x02) >> 1;
 FUNC_0(VAR_1, 0x26, VAR_3);
 FUNC_0(VAR_1, 0x27, VAR_4);

 return 0;
}
