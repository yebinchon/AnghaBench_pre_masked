
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* b; int * l; } ;
struct TYPE_5__ {unsigned int cnt; int hash; TYPE_1__ buf; int len; } ;
typedef TYPE_2__ ppc_SHA_CTX ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ,int*,int) ;

int FUNC_3(unsigned char *VAR_0, ppc_SHA_CTX *VAR_1)
{
 unsigned int VAR_2 = VAR_1->cnt;

 VAR_1->buf.b[VAR_2++] = 0x80;
 if (VAR_2 > 56) {
  if (VAR_2 < 64)
   FUNC_1(&VAR_1->buf.b[VAR_2], 0, 64 - VAR_2);
  FUNC_2(VAR_1->hash, VAR_1->buf.b, 1);
  VAR_2 = 0;
 }
 if (VAR_2 < 56)
  FUNC_1(&VAR_1->buf.b[VAR_2], 0, 56 - VAR_2);
 VAR_1->buf.l[7] = VAR_1->len;
 FUNC_2(VAR_1->hash, VAR_1->buf.b, 1);
 FUNC_0(VAR_0, VAR_1->hash, 20);
 return 0;
}
