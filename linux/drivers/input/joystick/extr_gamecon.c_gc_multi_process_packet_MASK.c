
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gc_pad {int type; struct input_dev* dev; } ;
struct gc {struct gc_pad* pads; scalar_t__* pad_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gc*,int,unsigned char*) ;
 int* VAR_7 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gc *VAR_8)
{
 unsigned char VAR_9[VAR_5];
 int VAR_10 = VAR_8->pad_count[128] ? VAR_5 : VAR_6;
 struct gc_pad *VAR_11;
 struct input_dev *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(VAR_8, VAR_10, VAR_9);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_11 = &VAR_8->pads[VAR_13];
  VAR_12 = VAR_11->dev;
  VAR_14 = VAR_7[VAR_13];

  switch (VAR_11->type) {
  case 128:
   FUNC_2(VAR_12, VAR_2, VAR_14 & VAR_9[5]);


  case 129:
   FUNC_1(VAR_12, VAR_0,
      !(VAR_14 & VAR_9[2]) - !(VAR_14 & VAR_9[3]));
   FUNC_1(VAR_12, VAR_1,
      !(VAR_14 & VAR_9[0]) - !(VAR_14 & VAR_9[1]));
   FUNC_2(VAR_12, VAR_3, VAR_14 & VAR_9[4]);
   FUNC_3(VAR_12);
   break;

  default:
   break;
  }
 }
}
