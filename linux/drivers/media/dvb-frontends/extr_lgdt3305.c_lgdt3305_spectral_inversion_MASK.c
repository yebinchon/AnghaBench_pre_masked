
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3305_state {int dummy; } ;
struct dtv_frontend_properties {int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lgdt3305_state *VAR_3,
           struct dtv_frontend_properties *VAR_4,
           int VAR_5)
{
 int VAR_6;

 FUNC_0("(%d)\n", VAR_5);

 switch (VAR_4->modulation) {
 case 128:
  VAR_6 = FUNC_1(VAR_3, VAR_1,
      VAR_5 ? 0xf9 : 0x79);
  break;
 case 129:
 case 130:
  VAR_6 = FUNC_1(VAR_3, VAR_2,
      VAR_5 ? 0xfd : 0xff);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
