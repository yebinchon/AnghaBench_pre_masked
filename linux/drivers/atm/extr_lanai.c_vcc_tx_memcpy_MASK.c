
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


 int FUNC_0 (int *,unsigned char const*,int) ;

__attribute__((used)) static inline void FUNC_1(struct lanai_vcc *VAR_0,
 const unsigned char *VAR_1, int VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4;
 VAR_3 = ((unsigned char *) VAR_0->tx.buf.ptr) + VAR_2;
 VAR_4 = VAR_3 - (unsigned char *) VAR_0->tx.buf.end;
 if (VAR_4 < 0)
  VAR_4 = 0;
 FUNC_0(VAR_0->tx.buf.ptr, VAR_1, VAR_2 - VAR_4);
 if (VAR_4 != 0) {
  FUNC_0(VAR_0->tx.buf.start, VAR_1 + VAR_2 - VAR_4, VAR_4);
  VAR_3 = ((unsigned char *) VAR_0->tx.buf.start) + VAR_4;
 }
 VAR_0->tx.buf.ptr = (u32 *) VAR_3;
}
