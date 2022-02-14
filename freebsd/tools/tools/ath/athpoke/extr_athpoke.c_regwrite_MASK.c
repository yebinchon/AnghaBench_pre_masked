
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct ath_diag {int ad_in_size; int ad_id; int ad_name; scalar_t__ ad_in_data; } ;
typedef int rw ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {void* value; void* addr; } ;
typedef TYPE_1__ HAL_REGWRITE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ,struct ath_diag*) ;

__attribute__((used)) static void
FUNC_2(int VAR_3, struct ath_diag *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 HAL_REGWRITE VAR_7;

 VAR_7.addr = VAR_5;
 VAR_7.value = VAR_6;
 VAR_4->ad_in_data = (caddr_t) &VAR_7;
 VAR_4->ad_in_size = sizeof(VAR_7);
 VAR_4->ad_id = VAR_1 | VAR_0;
 if (FUNC_1(VAR_3, VAR_2, VAR_4) < 0)
  FUNC_0(1, VAR_4->ad_name);
}
