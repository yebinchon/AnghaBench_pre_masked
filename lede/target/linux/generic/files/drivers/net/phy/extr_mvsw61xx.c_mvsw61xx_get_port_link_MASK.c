
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_port_link {int link; int duplex; int speed; } ;
struct switch_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct switch_dev*,int ) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_8, int VAR_9,
  struct switch_port_link *VAR_10)
{
 u16 VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_8, FUNC_0(VAR_4, VAR_9));

 VAR_10->link = VAR_11 & VAR_1;
 if (!VAR_10->link)
  return 0;

 VAR_10->duplex = VAR_11 & VAR_0;

 VAR_12 = (VAR_11 & VAR_2) >>
   VAR_3;

 switch (VAR_12) {
 case 130:
  VAR_10->speed = VAR_5;
  break;
 case 129:
  VAR_10->speed = VAR_6;
  break;
 case 128:
  VAR_10->speed = VAR_7;
  break;
 }

 return 0;
}
