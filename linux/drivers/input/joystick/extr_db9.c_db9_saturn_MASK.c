
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {int dummy; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int n_pads; } ;


 int VAR_0 ;



 TYPE_1__* VAR_1 ;
 unsigned char FUNC_0 (struct parport*,unsigned char*,int,int) ;
 int FUNC_1 (unsigned char,unsigned char*,struct input_dev**,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_2, struct parport *VAR_3, struct input_dev *VAR_4[])
{
 unsigned char VAR_5, VAR_6[60];
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;

 switch (VAR_2) {
 case 128:
  VAR_7 = 0;
  VAR_8 = 1;
  break;
 case 130:
  VAR_7 = 1;
  VAR_8 = 1;
  break;
 case 129:
  VAR_7 = 1;
  VAR_8 = 2;
  break;
 default:
  return -1;
 }
 VAR_9 = FUNC_2(VAR_1[VAR_2].n_pads, VAR_0);
 for (VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_5 = FUNC_0(VAR_3, VAR_6, VAR_7 + VAR_11, 1);
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_4, VAR_10, VAR_9);
 }
 return 0;
}
