
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; int num_contacts_left; TYPE_1__* shared; struct input_dev* touch_input; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char FUNC_1 (struct input_dev*,int ) ;
 int FUNC_2 (struct input_dev*,unsigned char) ;
 int FUNC_3 (struct input_dev*,int ,unsigned char) ;
 int FUNC_4 (struct input_dev*,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int) ;
 int FUNC_7 (struct input_dev*,int ,int) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (struct wacom_wac*) ;

__attribute__((used)) static void FUNC_12(struct wacom_wac *VAR_7)
{
 const int VAR_8 = 8;
 const int VAR_9 = 4;
 const int VAR_10 = 43;

 struct input_dev *VAR_11 = VAR_7->touch_input;
 unsigned char *VAR_12 = VAR_7->data;
 int VAR_13 = 5;
 int VAR_14, VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  unsigned char *VAR_16 = &VAR_12[VAR_14*VAR_10 + 109];
  int VAR_17 = VAR_16[0] & 0x7F;
  int VAR_18;

  if (!(VAR_16[0] & 0x80))
   continue;





  if (VAR_17)
   VAR_7->num_contacts_left = VAR_17;

  VAR_18 = FUNC_10(VAR_13, VAR_7->num_contacts_left);

  for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
   unsigned char *VAR_19 = &VAR_16[VAR_15*VAR_8 + 1];
   int VAR_20 = FUNC_2(VAR_11, VAR_19[0]);
   int VAR_21 = FUNC_0(&VAR_19[2]);
   int VAR_22 = FUNC_0(&VAR_19[4]);
   int VAR_23 = VAR_19[6] * FUNC_1(VAR_11, VAR_1);
   int VAR_24 = VAR_19[7] * FUNC_1(VAR_11, VAR_2);

   if (VAR_20 < 0)
    continue;

   FUNC_4(VAR_11, VAR_20);
   FUNC_3(VAR_11, VAR_5, VAR_19[1] & 0x01);
   FUNC_6(VAR_11, VAR_1, VAR_21);
   FUNC_6(VAR_11, VAR_2, VAR_22);
   FUNC_6(VAR_11, VAR_3, FUNC_9(VAR_23, VAR_24));
   FUNC_6(VAR_11, VAR_4, FUNC_10(VAR_23, VAR_24));
   FUNC_6(VAR_11, VAR_0, VAR_23 > VAR_24);
  }

  FUNC_5(VAR_11);

  VAR_7->num_contacts_left -= VAR_18;
  if (VAR_7->num_contacts_left <= 0) {
   VAR_7->num_contacts_left = 0;
   VAR_7->shared->touch_down = FUNC_11(VAR_7);
   FUNC_8(VAR_11);
  }
 }

 if (VAR_7->num_contacts_left == 0) {


  FUNC_7(VAR_11, VAR_6, !(VAR_12[281] >> 7));
  FUNC_8(VAR_11);
 }

}
