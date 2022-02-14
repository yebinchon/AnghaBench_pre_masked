
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct hil_dev {int idx4; int* data; scalar_t__ is_pointer; } ;
typedef int irqreturn_t ;
typedef int hil_packet ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hil_dev*) ;
 int FUNC_2 (struct hil_dev*) ;
 int FUNC_3 (struct hil_dev*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct hil_dev*) ;
 struct hil_dev* FUNC_6 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_7(struct serio *VAR_4,
    unsigned char VAR_5, unsigned int VAR_6)
{
 struct hil_dev *VAR_7;
 hil_packet VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_4);
 FUNC_0(VAR_7 == ((void*)0));

 if (VAR_7->idx4 >= VAR_1 * sizeof(hil_packet)) {
  FUNC_5(VAR_7);
  goto out;
 }

 VAR_9 = VAR_7->idx4 / 4;
 if (!(VAR_7->idx4 % 4))
  VAR_7->data[VAR_9] = 0;
 VAR_8 = VAR_7->data[VAR_9];
 VAR_8 |= ((hil_packet)VAR_5) << ((3 - (VAR_7->idx4 % 4)) * 8);
 VAR_7->data[VAR_9] = VAR_8;


 if ((++VAR_7->idx4 % 4) == 0) {
  if ((VAR_8 & 0xffff0000) != VAR_0) {
   FUNC_5(VAR_7);
  } else if (VAR_8 & VAR_2) {
   if (FUNC_4(VAR_8))
    FUNC_1(VAR_7);
   else if (VAR_7->is_pointer)
    FUNC_3(VAR_7);
   else
    FUNC_2(VAR_7);
   VAR_7->idx4 = 0;
  }
 }
 out:
 return VAR_3;
}
