
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t len; } ;
struct TYPE_3__ {char* buf; int len; } ;
struct window {TYPE_2__ data; TYPE_1__ instructions; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct window*,char const**,size_t*) ;

__attribute__((used)) static int FUNC_2(struct window *VAR_0)
{
 const char *VAR_1;
 size_t VAR_2 = 0;





 for (VAR_1 = VAR_0->instructions.buf;
      VAR_1 != VAR_0->instructions.buf + VAR_0->instructions.len;
      )
  if (FUNC_1(VAR_0, &VAR_1, &VAR_2))
   return -1;
 if (VAR_2 != VAR_0->data.len)
  return FUNC_0("invalid delta: does not copy all inline data");
 return 0;
}
