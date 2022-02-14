
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ve_spc_drvdata {int done; scalar_t__ baseaddr; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int cur_rsp_mask; int cur_rsp_stat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct ve_spc_drvdata *VAR_5 = VAR_4;
 uint32_t VAR_6 = FUNC_1(VAR_5->baseaddr + VAR_1);

 if (VAR_2->cur_rsp_mask & VAR_6) {
  VAR_2->cur_rsp_stat = VAR_6;
  FUNC_0(&VAR_5->done);
 }

 return VAR_0;
}
