
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pos; scalar_t__ len; int* buf; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct config_source {TYPE_2__ u; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct config_source *VAR_1)
{
 if (VAR_1->u.buf.pos < VAR_1->u.buf.len)
  return VAR_1->u.buf.buf[VAR_1->u.buf.pos++];

 return VAR_0;
}
