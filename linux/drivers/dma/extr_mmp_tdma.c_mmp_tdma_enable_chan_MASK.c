
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_tdma_chan {int status; scalar_t__ reg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mmp_tdma_chan *VAR_3)
{

 FUNC_1(FUNC_0(VAR_3->reg_base + VAR_1) | VAR_2,
     VAR_3->reg_base + VAR_1);
 VAR_3->status = VAR_0;
}
