
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * start; int * ptr; int * end; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct lanai_vcc {TYPE_2__ tx; } ;


 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct lanai_vcc *VAR_0,
 int VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0((((unsigned long) VAR_0->tx.buf.ptr) & 15) == 8,
     "vcc_tx_add_aal5_trailer: bad ptr=%p\n", VAR_0->tx.buf.ptr);
 VAR_0->tx.buf.ptr += 2;
 VAR_0->tx.buf.ptr[-2] = FUNC_1((VAR_3 << 24) | (VAR_2 << 16) | VAR_1);
 if (VAR_0->tx.buf.ptr >= VAR_0->tx.buf.end)
  VAR_0->tx.buf.ptr = VAR_0->tx.buf.start;
}
