
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; size_t pos; } ;
struct TYPE_4__ {TYPE_1__ string; } ;
struct source {char lastchar; TYPE_2__ u; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct source *VAR_1)
{

 VAR_1->lastchar = VAR_1->u.string.buf[VAR_1->u.string.pos];
 if (VAR_1->lastchar == '\0')
  return (VAR_0);
 else {
  VAR_1->u.string.pos++;
  return (VAR_1->lastchar);
 }
}
