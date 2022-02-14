
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367_state {int dummy; } ;
typedef enum stv0367cab_mod { ____Placeholder_stv0367cab_mod } stv0367cab_mod ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct stv0367_state*,int ,int) ;
 int FUNC_1 (struct stv0367_state*,int ,int) ;

__attribute__((used)) static enum stv0367cab_mod FUNC_2(struct stv0367_state *VAR_9,
       u32 VAR_10,
       enum stv0367cab_mod VAR_11)
{

 FUNC_0(VAR_9, VAR_0, VAR_11);


 switch (VAR_11) {
 case 130:
  FUNC_1(VAR_9, VAR_8, 0x00);
  break;
 case 133:
  FUNC_1(VAR_9, VAR_1, 0x64);
  FUNC_1(VAR_9, VAR_8, 0x00);
  FUNC_1(VAR_9, VAR_7, 0x90);
  FUNC_1(VAR_9, VAR_5, 0xc1);
  FUNC_1(VAR_9, VAR_4, 0xa7);
  FUNC_1(VAR_9, VAR_2, 0x95);
  FUNC_1(VAR_9, VAR_3, 0x40);
  FUNC_1(VAR_9, VAR_6, 0x8a);
  break;
 case 131:
  FUNC_1(VAR_9, VAR_8, 0x00);
  FUNC_1(VAR_9, VAR_1, 0x6e);
  FUNC_1(VAR_9, VAR_7, 0xb0);
  FUNC_1(VAR_9, VAR_5, 0xc1);
  FUNC_1(VAR_9, VAR_4, 0xb7);
  FUNC_1(VAR_9, VAR_2, 0x9d);
  FUNC_1(VAR_9, VAR_3, 0x7f);
  FUNC_1(VAR_9, VAR_6, 0xa7);
  break;
 case 128:
  FUNC_1(VAR_9, VAR_8, 0x82);
  FUNC_1(VAR_9, VAR_1, 0x5a);
  if (VAR_10 > 4500000) {
   FUNC_1(VAR_9, VAR_7, 0xb0);
   FUNC_1(VAR_9, VAR_5, 0xc1);
   FUNC_1(VAR_9, VAR_4, 0xa5);
  } else if (VAR_10 > 2500000) {
   FUNC_1(VAR_9, VAR_7, 0xa0);
   FUNC_1(VAR_9, VAR_5, 0xc1);
   FUNC_1(VAR_9, VAR_4, 0xa6);
  } else {
   FUNC_1(VAR_9, VAR_7, 0xa0);
   FUNC_1(VAR_9, VAR_5, 0xd1);
   FUNC_1(VAR_9, VAR_4, 0xa7);
  }
  FUNC_1(VAR_9, VAR_2, 0x95);
  FUNC_1(VAR_9, VAR_3, 0x40);
  FUNC_1(VAR_9, VAR_6, 0x99);
  break;
 case 134:
  FUNC_1(VAR_9, VAR_8, 0x00);
  FUNC_1(VAR_9, VAR_1, 0x76);
  FUNC_1(VAR_9, VAR_7, 0x90);
  FUNC_1(VAR_9, VAR_5, 0xb1);
  if (VAR_10 > 4500000)
   FUNC_1(VAR_9, VAR_4, 0xa7);
  else if (VAR_10 > 2500000)
   FUNC_1(VAR_9, VAR_4, 0xa6);
  else
   FUNC_1(VAR_9, VAR_4, 0x97);

  FUNC_1(VAR_9, VAR_2, 0x8e);
  FUNC_1(VAR_9, VAR_3, 0x7f);
  FUNC_1(VAR_9, VAR_6, 0xa7);
  break;
 case 132:
  FUNC_1(VAR_9, VAR_8, 0x94);
  FUNC_1(VAR_9, VAR_1, 0x5a);
  FUNC_1(VAR_9, VAR_7, 0xa0);
  if (VAR_10 > 4500000)
   FUNC_1(VAR_9, VAR_5, 0xc1);
  else if (VAR_10 > 2500000)
   FUNC_1(VAR_9, VAR_5, 0xc1);
  else
   FUNC_1(VAR_9, VAR_5, 0xd1);

  FUNC_1(VAR_9, VAR_4, 0xa7);
  FUNC_1(VAR_9, VAR_2, 0x85);
  FUNC_1(VAR_9, VAR_3, 0x40);
  FUNC_1(VAR_9, VAR_6, 0xa7);
  break;
 case 129:
  FUNC_1(VAR_9, VAR_8, 0x00);
  break;
 case 135:
  FUNC_1(VAR_9, VAR_8, 0x00);
  break;
 default:
  break;
 }

 return VAR_11;
}
