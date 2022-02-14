
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t const len; scalar_t__ buf; } ;
struct window {TYPE_1__ data; int out; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__,size_t) ;
 scalar_t__ FUNC_2 (size_t const,size_t) ;

__attribute__((used)) static int FUNC_3(struct window *VAR_0, size_t *VAR_1, size_t VAR_2)
{
 const size_t VAR_3 = *VAR_1;
 if (FUNC_2(VAR_3, VAR_2) ||
     VAR_3 + VAR_2 > VAR_0->data.len)
  return FUNC_0("invalid delta: copies unavailable inline data");
 FUNC_1(&VAR_0->out, VAR_0->data.buf + VAR_3, VAR_2);
 *VAR_1 += VAR_2;
 return 0;
}
