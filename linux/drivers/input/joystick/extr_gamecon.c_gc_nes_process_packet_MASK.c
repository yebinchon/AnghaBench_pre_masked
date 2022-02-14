
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t* VAR_10 ;
 int FUNC_0 (struct gc*,int,unsigned char*) ;
 int * VAR_11 ;
 size_t* VAR_12 ;
 int* VAR_13 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,char) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct gc *VAR_14)
{
 unsigned char VAR_15[VAR_6];
 struct gc_pad *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 char VAR_22, VAR_23;

 VAR_21 = VAR_14->pad_count[128] ? VAR_6 :
   (VAR_14->pad_count[129] ? VAR_7 : VAR_5);

 FUNC_0(VAR_14, VAR_21, VAR_15);

 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {

  VAR_16 = &VAR_14->pads[VAR_18];
  VAR_17 = VAR_16->dev;
  VAR_20 = VAR_13[VAR_18];

  switch (VAR_16->type) {

  case 130:

   FUNC_1(VAR_17, VAR_0, !(VAR_20 & VAR_15[6]) - !(VAR_20 & VAR_15[7]));
   FUNC_1(VAR_17, VAR_1, !(VAR_20 & VAR_15[4]) - !(VAR_20 & VAR_15[5]));

   for (VAR_19 = 0; VAR_19 < 4; VAR_19++)
    FUNC_2(VAR_17, VAR_11[VAR_19],
       VAR_20 & VAR_15[VAR_10[VAR_19]]);
   FUNC_4(VAR_17);
   break;

  case 129:

   FUNC_1(VAR_17, VAR_0, !(VAR_20 & VAR_15[6]) - !(VAR_20 & VAR_15[7]));
   FUNC_1(VAR_17, VAR_1, !(VAR_20 & VAR_15[4]) - !(VAR_20 & VAR_15[5]));

   for (VAR_19 = 0; VAR_19 < 8; VAR_19++)
    FUNC_2(VAR_17, VAR_11[VAR_19],
       VAR_20 & VAR_15[VAR_12[VAR_19]]);
   FUNC_4(VAR_17);
   break;

  case 128:
   if (!(VAR_20 & VAR_15[12]) && !(VAR_20 & VAR_15[13]) &&
       !(VAR_20 & VAR_15[14]) && (VAR_20 & VAR_15[15])) {
    FUNC_2(VAR_17, VAR_2, VAR_20 & VAR_15[9]);
    FUNC_2(VAR_17, VAR_3, VAR_20 & VAR_15[8]);

    VAR_22 = VAR_23 = 0;
    for (VAR_19 = 0; VAR_19 < 7; VAR_19++) {
     VAR_22 <<= 1;
     if (VAR_15[25 + VAR_19] & VAR_20)
      VAR_22 |= 1;

     VAR_23 <<= 1;
     if (VAR_15[17 + VAR_19] & VAR_20)
      VAR_23 |= 1;
    }

    if (VAR_22) {
     if (VAR_15[24] & VAR_20)
      VAR_22 = -VAR_22;
     FUNC_3(VAR_17, VAR_8, VAR_22);
    }

    if (VAR_23) {
     if (VAR_15[16] & VAR_20)
      VAR_23 = -VAR_23;
     FUNC_3(VAR_17, VAR_9, VAR_23);
    }

    FUNC_4(VAR_17);
   }
   break;

  default:
   break;
  }
 }
}
