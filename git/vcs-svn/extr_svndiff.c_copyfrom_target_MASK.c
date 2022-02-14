
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; int * buf; } ;
struct window {TYPE_1__ out; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const**,size_t*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct window *VAR_0, const char **VAR_1,
      size_t VAR_2, const char *VAR_3)
{
 size_t VAR_4;
 if (FUNC_1(VAR_1, &VAR_4, VAR_3))
  return -1;
 if (VAR_4 >= VAR_0->out.len)
  return FUNC_0("invalid delta: copies from the future");
 for (; VAR_2 > 0; VAR_2--)
  FUNC_2(&VAR_0->out, VAR_0->out.buf[VAR_4++]);
 return 0;
}
