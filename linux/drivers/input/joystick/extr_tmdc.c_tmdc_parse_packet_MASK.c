
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmdc_port {unsigned char mode; int absc; scalar_t__* abs; int* btnc; int* btno; int dev; int * btn; } ;
struct TYPE_2__ {unsigned char x; unsigned char y; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;


 int FUNC_0 (int ,scalar_t__,unsigned char) ;
 int FUNC_1 (int ,int ,unsigned char) ;
 int FUNC_2 (int ) ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct tmdc_port *VAR_6, unsigned char *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (VAR_7[VAR_2] != VAR_6->mode)
  return -1;

 for (VAR_8 = 0; VAR_8 < VAR_6->absc; VAR_8++) {
  if (VAR_6->abs[VAR_8] < 0)
   return 0;

  FUNC_0(VAR_6->dev, VAR_6->abs[VAR_8], VAR_7[VAR_3[VAR_8]]);
 }

 switch (VAR_6->mode) {

  case 128:

   VAR_8 = VAR_4[0];
   FUNC_0(VAR_6->dev, VAR_0, ((VAR_7[VAR_8] >> 3) & 1) - ((VAR_7[VAR_8] >> 1) & 1));
   FUNC_0(VAR_6->dev, VAR_1, ((VAR_7[VAR_8] >> 2) & 1) - ( VAR_7[VAR_8] & 1));
   break;

  case 129:

   VAR_8 = VAR_3[3];
   FUNC_0(VAR_6->dev, VAR_0, VAR_5[(VAR_7[VAR_8] - 141) / 25].x);
   FUNC_0(VAR_6->dev, VAR_1, VAR_5[(VAR_7[VAR_8] - 141) / 25].y);
   break;

 }

 for (VAR_9 = VAR_10 = 0; VAR_9 < 4; VAR_9++) {
  for (VAR_8 = 0; VAR_8 < VAR_6->btnc[VAR_9]; VAR_8++)
   FUNC_1(VAR_6->dev, VAR_6->btn[VAR_8 + VAR_10],
    ((VAR_7[VAR_4[VAR_9]] >> (VAR_8 + VAR_6->btno[VAR_9])) & 1));
  VAR_10 += VAR_6->btnc[VAR_9];
 }

 FUNC_2(VAR_6->dev);

 return 0;
}
