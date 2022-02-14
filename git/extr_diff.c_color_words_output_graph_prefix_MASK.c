
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
struct TYPE_4__ {TYPE_1__ text; } ;
struct diff_words_data {scalar_t__ last_minus; char* current_plus; TYPE_2__ plus; } ;



__attribute__((used)) static int FUNC_0(struct diff_words_data *VAR_0)
{
 if ((VAR_0->last_minus == 0 &&
  VAR_0->current_plus == VAR_0->plus.text.ptr) ||
  (VAR_0->current_plus > VAR_0->plus.text.ptr &&
  *(VAR_0->current_plus - 1) == '\n')) {
  return 1;
 } else {
  return 0;
 }
}
