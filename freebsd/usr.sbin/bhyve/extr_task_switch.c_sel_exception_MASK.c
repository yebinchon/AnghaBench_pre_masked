
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmctx {int dummy; } ;


 int FUNC_0 (struct vmctx*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct vmctx *VAR_0, int VAR_1, int VAR_2, uint16_t VAR_3, int VAR_4)
{
 VAR_3 &= ~0x3;
 if (VAR_4)
  VAR_3 |= 0x1;
 FUNC_0(VAR_0, VAR_1, VAR_2, 1, VAR_3);
}
