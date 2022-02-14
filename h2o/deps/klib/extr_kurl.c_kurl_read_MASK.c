
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ssize_t ;
struct TYPE_4__ {scalar_t__ l_buf; size_t p_buf; size_t buf; } ;
typedef TYPE_1__ kurl_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,size_t,size_t) ;

ssize_t FUNC_2(kurl_t *VAR_0, void *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3 = VAR_2;
 if (VAR_0->l_buf == 0) return 0;
 while (VAR_3) {
  if (VAR_0->l_buf - VAR_0->p_buf >= VAR_3) {
   if (VAR_1) FUNC_1((uint8_t*)VAR_1 + (VAR_2 - VAR_3), VAR_0->buf + VAR_0->p_buf, VAR_3);
   VAR_0->p_buf += VAR_3;
   VAR_3 = 0;
  } else {
   int VAR_4;
   if (VAR_1 && VAR_0->l_buf > VAR_0->p_buf)
    FUNC_1((uint8_t*)VAR_1 + (VAR_2 - VAR_3), VAR_0->buf + VAR_0->p_buf, VAR_0->l_buf - VAR_0->p_buf);
   VAR_3 -= VAR_0->l_buf - VAR_0->p_buf;
   VAR_0->p_buf = VAR_0->l_buf;
   VAR_4 = FUNC_0(VAR_0);
   if (VAR_4 <= 0) break;
  }
 }
 return VAR_2 - VAR_3;
}
