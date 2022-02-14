
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct switch_port_link {int link; int duplex; int aneg; void* speed; } ;
struct switch_dev {int dummy; } ;
struct b53_device {int enabled_ports; int duplex_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;



 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (struct b53_device*,int ,int ,int*) ;
 int FUNC_4 (struct b53_device*,int ,int ,int*) ;
 scalar_t__ FUNC_5 (struct b53_device*) ;
 scalar_t__ FUNC_6 (struct b53_device*) ;
 scalar_t__ FUNC_7 (struct b53_device*,int) ;
 struct b53_device* FUNC_8 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_9(struct switch_dev *VAR_6, int VAR_7,
        struct switch_port_link *VAR_8)
{
 struct b53_device *VAR_9 = FUNC_8(VAR_6);

 if (FUNC_7(VAR_9, VAR_7)) {
  VAR_8->link = 1;
  VAR_8->duplex = 1;
  VAR_8->speed = FUNC_5(VAR_9) || FUNC_6(VAR_9) ?
    VAR_4 : VAR_5;
  VAR_8->aneg = 0;
 } else if (VAR_9->enabled_ports & FUNC_0(VAR_7)) {
  u32 VAR_10;
  u16 VAR_11, VAR_12;

  FUNC_3(VAR_9, VAR_2, VAR_0, &VAR_11);
  FUNC_3(VAR_9, VAR_2, VAR_9->duplex_reg, &VAR_12);

  VAR_11 = (VAR_11 >> VAR_7) & 1;
  VAR_12 = (VAR_12 >> VAR_7) & 1;

  if (FUNC_5(VAR_9) || FUNC_6(VAR_9)) {
   u16 VAR_13;

   FUNC_3(VAR_9, VAR_2, VAR_1, &VAR_13);
   VAR_10 = FUNC_1(VAR_13, VAR_7);
  } else {
   FUNC_4(VAR_9, VAR_2, VAR_1, &VAR_10);
   VAR_10 = FUNC_2(VAR_10, VAR_7);
  }

  VAR_8->link = VAR_11;
  if (VAR_11) {
   VAR_8->duplex = VAR_12;
   switch (VAR_10) {
   case 128:
    VAR_8->speed = VAR_3;
    break;
   case 129:
    VAR_8->speed = VAR_4;
    break;
   case 130:
    VAR_8->speed = VAR_5;
    break;
   }
  }

  VAR_8->aneg = 1;
 } else {
  VAR_8->link = 0;
 }

 return 0;

}
