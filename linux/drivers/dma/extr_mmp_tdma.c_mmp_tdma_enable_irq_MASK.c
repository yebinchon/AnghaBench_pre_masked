
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mmp_tdma_chan *VAR_2, bool VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_1, VAR_2->reg_base + VAR_0);
 else
  FUNC_0(0, VAR_2->reg_base + VAR_0);
}
