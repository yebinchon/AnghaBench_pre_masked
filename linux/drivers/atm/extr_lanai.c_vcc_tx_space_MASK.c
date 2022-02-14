
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ start; scalar_t__ ptr; } ;
struct TYPE_3__ {TYPE_2__ buf; } ;
struct lanai_vcc {TYPE_1__ tx; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_1(const struct lanai_vcc *VAR_0, int VAR_1)
{
 int VAR_2;
 VAR_2 = VAR_1 * 16;
 VAR_2 -= ((unsigned long) VAR_0->tx.buf.ptr) -
     ((unsigned long) VAR_0->tx.buf.start);
 VAR_2 -= 16;
 if (VAR_2 < 0)
  VAR_2 += FUNC_0(&VAR_0->tx.buf);
 return VAR_2;
}
