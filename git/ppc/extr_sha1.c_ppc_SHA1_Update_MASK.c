
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {unsigned char const* b; } ;
struct TYPE_5__ {int len; int cnt; int hash; TYPE_1__ buf; } ;
typedef TYPE_2__ ppc_SHA_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char const*,unsigned long) ;
 int FUNC_1 (int ,unsigned char const*,unsigned long) ;

int FUNC_2(ppc_SHA_CTX *VAR_0, const void *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 const unsigned char *VAR_4 = VAR_1;

 VAR_0->len += (uint64_t) VAR_2 << 3;
 while (VAR_2 != 0) {
  if (VAR_0->cnt || VAR_2 < 64) {
   VAR_3 = 64 - VAR_0->cnt;
   if (VAR_3 > VAR_2)
    VAR_3 = VAR_2;
   FUNC_0(&VAR_0->buf.b[VAR_0->cnt], VAR_4, VAR_3);
   if ((VAR_0->cnt += VAR_3) == 64) {
    FUNC_1(VAR_0->hash, VAR_0->buf.b, 1);
    VAR_0->cnt = 0;
   }
  } else {
   VAR_3 = VAR_2 >> 6;
   FUNC_1(VAR_0->hash, VAR_4, VAR_3);
   VAR_3 <<= 6;
  }
  VAR_2 -= VAR_3;
  VAR_4 += VAR_3;
 }
 return 0;
}
