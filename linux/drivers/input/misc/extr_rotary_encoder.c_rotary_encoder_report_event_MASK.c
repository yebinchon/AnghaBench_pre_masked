
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rotary_encoder {scalar_t__ dir; unsigned int pos; unsigned int steps; int input; int axis; scalar_t__ rollover; scalar_t__ relative_axis; } ;


 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rotary_encoder *VAR_0)
{
 if (VAR_0->relative_axis) {
  FUNC_1(VAR_0->input,
     VAR_0->axis, VAR_0->dir);
 } else {
  unsigned int VAR_1 = VAR_0->pos;

  if (VAR_0->dir < 0) {

   if (VAR_0->rollover)
    VAR_1 += VAR_0->steps;
   if (VAR_1)
    VAR_1--;
  } else {

   if (VAR_0->rollover || VAR_1 < VAR_0->steps)
    VAR_1++;
  }

  if (VAR_0->rollover)
   VAR_1 %= VAR_0->steps;

  VAR_0->pos = VAR_1;
  FUNC_0(VAR_0->input, VAR_0->axis, VAR_0->pos);
 }

 FUNC_2(VAR_0->input);
}
