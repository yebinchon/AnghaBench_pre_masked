
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip_proto {scalar_t__ esc; scalar_t__ pos; scalar_t__ more; int obuf; int ibuf; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct slip_proto * VAR_0)
{
 FUNC_0(VAR_0->ibuf, 0, sizeof(VAR_0->ibuf));
 FUNC_0(VAR_0->obuf, 0, sizeof(VAR_0->obuf));
 VAR_0->more = 0;
 VAR_0->pos = 0;
 VAR_0->esc = 0;
}
