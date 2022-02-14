
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v ;
typedef int uint32_t ;
struct ath_diag {int ad_in_size; int ad_out_size; int ad_id; int ad_name; void* ad_out_data; void* ad_in_data; } ;
typedef int ra ;
typedef void* caddr_t ;
struct TYPE_2__ {scalar_t__ end; int start; } ;
typedef TYPE_1__ HAL_REGRANGE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ,struct ath_diag*) ;

__attribute__((used)) static uint32_t
FUNC_2(int VAR_4, struct ath_diag *VAR_5, uint32_t VAR_6)
{
 HAL_REGRANGE VAR_7;
 uint32_t VAR_8[3];

 VAR_7.start = VAR_6;
 VAR_7.end = 0;

 VAR_5->ad_in_data = (caddr_t) &VAR_7;
 VAR_5->ad_in_size = sizeof(VAR_7);
 VAR_5->ad_out_data = (caddr_t) VAR_8;
 VAR_5->ad_out_size = sizeof(VAR_8);
 VAR_5->ad_id = VAR_2 | VAR_1 | VAR_0;
 if (FUNC_1(VAR_4, VAR_3, VAR_5) < 0)
  FUNC_0(1, VAR_5->ad_name);
 return VAR_8[2];
}
