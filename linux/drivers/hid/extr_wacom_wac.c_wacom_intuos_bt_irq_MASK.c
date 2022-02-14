
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_wac {TYPE_2__* pen_input; int data; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned char,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;
 int FUNC_2 (struct wacom_wac*,unsigned char*) ;
 int FUNC_3 (struct wacom_wac*,int ,unsigned int,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_3, size_t VAR_4)
{
 unsigned char VAR_5[VAR_0];
 int VAR_6 = 1;
 unsigned VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_5, VAR_3->data, VAR_4);

 switch (VAR_5[0]) {
 case 0x04:
  FUNC_2(VAR_3, VAR_5 + VAR_6);
  VAR_6 += 10;

 case 0x03:
  FUNC_2(VAR_3, VAR_5 + VAR_6);
  VAR_6 += 10;
  FUNC_2(VAR_3, VAR_5 + VAR_6);
  VAR_6 += 10;
  VAR_7 = VAR_5[VAR_6];
  VAR_9 = (VAR_7 & 0x08) ? 1 : 0;
  VAR_10 = (VAR_7 & 0x10) ? 1 : 0;
  VAR_8 = VAR_2[VAR_7 & 0x07];
  FUNC_3(VAR_3, VAR_1,
         VAR_8, VAR_9,
         VAR_8 || VAR_9,
         VAR_10);
  break;
 default:
  FUNC_0(VAR_3->pen_input->dev.parent,
    "Unknown report: %d,%d size:%zu\n",
    VAR_5[0], VAR_5[1], VAR_4);
  return 0;
 }
 return 0;
}
