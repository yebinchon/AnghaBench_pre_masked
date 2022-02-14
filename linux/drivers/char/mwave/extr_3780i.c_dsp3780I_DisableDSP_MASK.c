
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned short usDspBaseIO; } ;
struct TYPE_5__ {int ClockControl; int SoftReset; int ConfigMode; scalar_t__ Reserved; } ;
typedef TYPE_1__ DSP_ISA_SLAVE_CONTROL ;
typedef TYPE_2__ DSP_3780I_CONFIG_SETTINGS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

int FUNC_6(DSP_3780I_CONFIG_SETTINGS * VAR_3)
{
 unsigned long VAR_4;
 unsigned short VAR_5 = VAR_3->usDspBaseIO;
 DSP_ISA_SLAVE_CONTROL VAR_6;


 FUNC_2(VAR_1, "3780i::dsp3780i_DisableDSP entry\n");

 VAR_6.ClockControl = 0;
 VAR_6.SoftReset = 1;
 VAR_6.ConfigMode = 0;
 VAR_6.Reserved = 0;
 FUNC_3(&VAR_2, VAR_4);
 FUNC_1(VAR_0, FUNC_0(VAR_6));

 FUNC_5(5);

 VAR_6.ClockControl = 1;
 FUNC_1(VAR_0, FUNC_0(VAR_6));
 FUNC_4(&VAR_2, VAR_4);

 FUNC_5(5);


 FUNC_2(VAR_1, "3780i::dsp3780i_DisableDSP exit\n");

 return 0;
}
