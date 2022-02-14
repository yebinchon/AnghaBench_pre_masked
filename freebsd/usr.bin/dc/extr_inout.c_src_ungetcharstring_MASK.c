
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pos; } ;
struct TYPE_4__ {TYPE_1__ string; } ;
struct source {char lastchar; TYPE_2__ u; } ;



__attribute__((used)) static void
FUNC_0(struct source *VAR_0)
{

 if (VAR_0->u.string.pos > 0) {
  if (VAR_0->lastchar != '\0')
   --VAR_0->u.string.pos;
 }
}
