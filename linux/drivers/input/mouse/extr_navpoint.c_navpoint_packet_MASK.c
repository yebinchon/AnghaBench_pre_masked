
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct navpoint {int* data; int dev; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct navpoint *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;

 switch (VAR_6->data[0]) {
 case 0xff:
 case 0x00:
  break;

 case 0x0e:
  VAR_7 = (VAR_6->data[1] & 0x01);
  VAR_8 = (VAR_6->data[1] & 0x02);
  VAR_9 = ((VAR_6->data[2] & 0x1f) << 8) | VAR_6->data[3];
  VAR_10 = ((VAR_6->data[4] & 0x1f) << 8) | VAR_6->data[5];
  VAR_11 = VAR_6->data[6];
  FUNC_2(VAR_6->input, VAR_5, VAR_7);
  FUNC_1(VAR_6->input, VAR_1, VAR_9);
  FUNC_1(VAR_6->input, VAR_2, VAR_10);
  FUNC_1(VAR_6->input, VAR_0, VAR_11);
  FUNC_2(VAR_6->input, VAR_4, VAR_7);
  FUNC_2(VAR_6->input, VAR_3, VAR_8);
  FUNC_3(VAR_6->input);
  break;

 case 0x19:
  if ((VAR_6->data[1] & 0xf0) == 0x10)
   break;

 default:
  FUNC_0(VAR_6->dev,
    "spurious packet: data=0x%02x,0x%02x,...\n",
    VAR_6->data[0], VAR_6->data[1]);
  break;
 }
}
