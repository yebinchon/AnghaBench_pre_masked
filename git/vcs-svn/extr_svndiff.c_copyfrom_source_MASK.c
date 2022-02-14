
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct window {TYPE_1__* in; int out; } ;
struct TYPE_4__ {scalar_t__ buf; } ;
struct TYPE_3__ {size_t width; TYPE_2__ buf; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const**,size_t*,char const*) ;
 int FUNC_2 (int *,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct window *VAR_0, const char **VAR_1,
      size_t VAR_2, const char *VAR_3)
{
 size_t VAR_4;
 if (FUNC_1(VAR_1, &VAR_4, VAR_3))
  return -1;
 if (FUNC_3(VAR_4, VAR_2) ||
     VAR_4 + VAR_2 > VAR_0->in->width)
  return FUNC_0("invalid delta: copies source data outside view");
 FUNC_2(&VAR_0->out, VAR_0->in->buf.buf + VAR_4, VAR_2);
 return 0;
}
