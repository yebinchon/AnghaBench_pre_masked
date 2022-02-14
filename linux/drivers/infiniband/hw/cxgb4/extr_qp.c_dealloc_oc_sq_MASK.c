
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_sq {int memsize; int dma_addr; } ;
struct c4iw_rdev {int dummy; } ;


 int FUNC_0 (struct c4iw_rdev*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct c4iw_rdev *VAR_0, struct t4_sq *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->dma_addr, VAR_1->memsize);
}
