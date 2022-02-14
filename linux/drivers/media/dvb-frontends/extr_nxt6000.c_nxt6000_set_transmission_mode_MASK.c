
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxt6000_state {int dummy; } ;
typedef enum fe_transmit_mode { ____Placeholder_fe_transmit_mode } fe_transmit_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct nxt6000_state*,int ) ;
 int FUNC_1 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nxt6000_state *VAR_3,
         enum fe_transmit_mode VAR_4)
{
 int VAR_5;

 switch (VAR_4) {

 case 130:
  if ((VAR_5 = FUNC_1(VAR_3, VAR_1, 0x00 | (FUNC_0(VAR_3, VAR_1) & ~0x03))) < 0)
   return VAR_5;

  return FUNC_1(VAR_3, VAR_2, (0x00 << 2) | (FUNC_0(VAR_3, VAR_2) & ~0x04));

 case 129:
 case 128:
  if ((VAR_5 = FUNC_1(VAR_3, VAR_1, 0x02 | (FUNC_0(VAR_3, VAR_1) & ~0x03))) < 0)
   return VAR_5;

  return FUNC_1(VAR_3, VAR_2, (0x01 << 2) | (FUNC_0(VAR_3, VAR_2) & ~0x04));

 default:
  return -VAR_0;

 }
}
