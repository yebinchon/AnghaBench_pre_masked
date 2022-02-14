
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pos; int* buf; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct config_source {TYPE_2__ u; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct config_source *VAR_2)
{
 if (VAR_2->u.buf.pos > 0) {
  VAR_2->u.buf.pos--;
  if (VAR_2->u.buf.buf[VAR_2->u.buf.pos] != VAR_1)
   FUNC_0("config_buf can only ungetc the same character");
  return VAR_1;
 }

 return VAR_0;
}
