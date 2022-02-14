
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct gc {TYPE_1__* pads; } ;
struct TYPE_2__ {scalar_t__ type; struct input_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 size_t* VAR_8 ;
 int FUNC_0 (struct gc*,unsigned char*) ;
 int* VAR_9 ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gc *VAR_10)
{
 unsigned char VAR_11[VAR_6];
 struct input_dev *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 signed char VAR_16, VAR_17;

 FUNC_0(VAR_10, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {

  if (VAR_10->pads[VAR_13].type != VAR_5)
   continue;

  VAR_12 = VAR_10->pads[VAR_13].dev;
  VAR_15 = VAR_9[VAR_13];

  if (VAR_15 & ~(VAR_11[8] | VAR_11[9])) {

   VAR_16 = VAR_17 = 0;

   for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
    if (VAR_11[23 - VAR_14] & VAR_15)
     VAR_16 |= 1 << VAR_14;
    if (VAR_11[31 - VAR_14] & VAR_15)
     VAR_17 |= 1 << VAR_14;
   }

   FUNC_1(VAR_12, VAR_2, VAR_16);
   FUNC_1(VAR_12, VAR_3, -VAR_17);

   FUNC_1(VAR_12, VAR_0,
      !(VAR_15 & VAR_11[6]) - !(VAR_15 & VAR_11[7]));
   FUNC_1(VAR_12, VAR_1,
      !(VAR_15 & VAR_11[4]) - !(VAR_15 & VAR_11[5]));

   for (VAR_14 = 0; VAR_14 < 10; VAR_14++)
    FUNC_2(VAR_12, VAR_7[VAR_14],
       VAR_15 & VAR_11[VAR_8[VAR_14]]);

   FUNC_3(VAR_12);
  }
 }
}
