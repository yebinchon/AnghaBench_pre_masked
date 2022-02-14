
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; int sw_start; int sw_end; int hw_override; int set_options; int unlink; int link; int mmio_addr; int packet; int sw_mmiosz; int sw_nchannels; } ;
struct stm_drvdata {TYPE_1__ stm; int numsp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct stm_drvdata *VAR_6,
      const char *VAR_7)
{
 VAR_6->stm.name = VAR_7;





 VAR_6->stm.sw_start = 1;
 VAR_6->stm.sw_end = 1;
 VAR_6->stm.hw_override = 1;
 VAR_6->stm.sw_nchannels = VAR_6->numsp;
 VAR_6->stm.sw_mmiosz = VAR_0;
 VAR_6->stm.packet = VAR_2;
 VAR_6->stm.mmio_addr = VAR_5;
 VAR_6->stm.link = VAR_1;
 VAR_6->stm.unlink = VAR_4;
 VAR_6->stm.set_options = VAR_3;
}
