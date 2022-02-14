
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cvmx_spi_mode_t ;
struct TYPE_2__ {int interface_up_cb; int calendar_sync_cb; int training_cb; int clock_detect_cb; int calendar_setup_cb; int reset_cb; } ;


 int FUNC_0 (int ,int,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;

int FUNC_2(int VAR_3, cvmx_spi_mode_t VAR_4, int VAR_5,
        int VAR_6)
{
 int VAR_7 = -1;

 if (!(FUNC_1(VAR_0) || FUNC_1(VAR_1)))
  return VAR_7;


 FUNC_0(VAR_2.reset_cb, VAR_3, VAR_4);


 FUNC_0(VAR_2.calendar_setup_cb, VAR_3, VAR_4,
    VAR_6);


 FUNC_0(VAR_2.clock_detect_cb, VAR_3, VAR_4, VAR_5);


 FUNC_0(VAR_2.training_cb, VAR_3, VAR_4, VAR_5);


 FUNC_0(VAR_2.calendar_sync_cb, VAR_3, VAR_4,
    VAR_5);


 FUNC_0(VAR_2.interface_up_cb, VAR_3, VAR_4);

 return VAR_7;
}
