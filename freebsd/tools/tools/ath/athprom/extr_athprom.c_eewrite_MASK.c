
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
typedef int eeval ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int ad_id; int ad_in_size; int ad_name; int * ad_out_data; scalar_t__ ad_out_size; scalar_t__ ad_in_data; } ;
struct TYPE_4__ {void* ee_data; void* ee_off; } ;
typedef TYPE_1__ HAL_DIAG_EEVAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(uint16_t VAR_5, uint16_t VAR_6)
{
 HAL_DIAG_EEVAL VAR_7;

 VAR_7.ee_off = VAR_5;
 VAR_7.ee_data = VAR_6;

 VAR_3.ad_id = VAR_1 | VAR_0;
 VAR_3.ad_in_size = sizeof(VAR_7);
 VAR_3.ad_in_data = (caddr_t) &VAR_7;
 VAR_3.ad_out_size = 0;
 VAR_3.ad_out_data = ((void*)0);
 if (FUNC_1(VAR_4, VAR_2, &VAR_3) < 0)
  FUNC_0(1, "ioctl: %s", VAR_3.ad_name);
}
