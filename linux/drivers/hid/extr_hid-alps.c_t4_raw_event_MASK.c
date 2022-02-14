
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct t4_input_report {int button; TYPE_1__* contact; } ;
struct alps_dev {int max_fingers; unsigned int y_max; unsigned int y_min; int input; } ;
struct TYPE_2__ {int x_hi; int x_lo; int y_hi; int y_lo; int palm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct alps_dev *VAR_5, u8 *VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 struct t4_input_report *VAR_12 = (struct t4_input_report *)VAR_6;

 if (!VAR_6)
  return 0;
 for (VAR_11 = 0; VAR_11 < VAR_5->max_fingers; VAR_11++) {
  VAR_8 = VAR_12->contact[VAR_11].x_hi << 8 | VAR_12->contact[VAR_11].x_lo;
  VAR_9 = VAR_12->contact[VAR_11].y_hi << 8 | VAR_12->contact[VAR_11].y_lo;
  VAR_9 = VAR_5->y_max - VAR_9 + VAR_5->y_min;
  VAR_10 = (VAR_12->contact[VAR_11].palm < 0x80 &&
   VAR_12->contact[VAR_11].palm > 0) * 62;
  if (VAR_8 == 0xffff) {
   VAR_8 = 0;
   VAR_9 = 0;
   VAR_10 = 0;
  }
  FUNC_1(VAR_5->input, VAR_11);

  FUNC_0(VAR_5->input,
   VAR_4, VAR_10 != 0);

  if (!VAR_10)
   continue;

  FUNC_3(VAR_5->input, VAR_0, VAR_8);
  FUNC_3(VAR_5->input, VAR_1, VAR_9);
  FUNC_3(VAR_5->input, VAR_2, VAR_10);
 }
 FUNC_2(VAR_5->input);

 FUNC_4(VAR_5->input, VAR_3, VAR_12->button);

 FUNC_5(VAR_5->input);
 return 1;
}
