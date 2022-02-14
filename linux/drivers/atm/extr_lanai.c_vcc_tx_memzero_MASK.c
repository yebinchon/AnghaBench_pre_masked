
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * ptr; int * start; scalar_t__ end; } ;
struct TYPE_4__ {TYPE_1__ buf; } ;
struct lanai_vcc {TYPE_2__ tx; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct lanai_vcc *VAR_0, int VAR_1)
{
 unsigned char *VAR_2;
 int VAR_3;
 if (VAR_1 == 0)
  return;
 VAR_2 = ((unsigned char *) VAR_0->tx.buf.ptr) + VAR_1;
 VAR_3 = VAR_2 - (unsigned char *) VAR_0->tx.buf.end;
 if (VAR_3 < 0)
  VAR_3 = 0;
 FUNC_0(VAR_0->tx.buf.ptr, 0, VAR_1 - VAR_3);
 if (VAR_3 != 0) {
  FUNC_0(VAR_0->tx.buf.start, 0, VAR_3);
  VAR_2 = ((unsigned char *) VAR_0->tx.buf.start) + VAR_3;
 }
 VAR_0->tx.buf.ptr = (u32 *) VAR_2;
}
