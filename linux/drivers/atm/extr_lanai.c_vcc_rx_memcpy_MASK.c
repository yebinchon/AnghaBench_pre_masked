
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ start; scalar_t__ ptr; scalar_t__ end; } ;
struct TYPE_3__ {TYPE_2__ buf; } ;
struct lanai_vcc {TYPE_1__ rx; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_2(unsigned char *VAR_0,
 const struct lanai_vcc *VAR_1, int VAR_2)
{
 int VAR_3 = ((const unsigned char *) VAR_1->rx.buf.ptr) + VAR_2 -
     ((const unsigned char *) (VAR_1->rx.buf.end));
 if (VAR_3 < 0)
  VAR_3 = 0;
 FUNC_1(VAR_0, VAR_1->rx.buf.ptr, VAR_2 - VAR_3);
 FUNC_1(VAR_0 + VAR_2 - VAR_3, VAR_1->rx.buf.start, VAR_3);

 FUNC_0();
}
