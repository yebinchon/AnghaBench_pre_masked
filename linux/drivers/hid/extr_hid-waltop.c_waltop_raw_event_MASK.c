
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report {scalar_t__ type; int id; } ;
struct hid_device {scalar_t__ product; } ;
typedef int s8 ;


 int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2, struct hid_report *VAR_3,
       u8 *VAR_4, int VAR_5)
{

 if (VAR_3->type == VAR_0 && VAR_3->id == 16 && VAR_5 >= 8) {






  if ((VAR_4[1] & 0xF) > 1) {

   VAR_4[6] = 0;
   VAR_4[7] = 0;
  }
 }


 if (VAR_2->product == VAR_1 &&
     VAR_3->type == VAR_0 &&
     VAR_3->id == 16 &&
     VAR_5 == 10) {







  static const s8 VAR_6[] = {
   0, 5, 10, 14, 19, 24, 29, 34, 40, 45,
   50, 56, 62, 68, 74, 81, 88, 96, 105
  };

  s8 VAR_7 = (s8)VAR_4[8];
  s8 VAR_8 = (s8)VAR_4[9];
  s8 VAR_9 = VAR_7 >= 0 ? 1 : -1;
  s8 VAR_10 = VAR_8 >= 0 ? 1 : -1;

  VAR_7 *= VAR_9;
  VAR_8 *= VAR_10;






  VAR_10 *= -1;





  if (VAR_7 > FUNC_0(VAR_6) - 1)
   VAR_7 = FUNC_0(VAR_6) - 1;
  if (VAR_8 > FUNC_0(VAR_6) - 1)
   VAR_8 = FUNC_0(VAR_6) - 1;

  VAR_4[8] = VAR_6[VAR_7] * VAR_9;
  VAR_4[9] = VAR_6[VAR_8] * VAR_10;
 }

 return 0;
}
