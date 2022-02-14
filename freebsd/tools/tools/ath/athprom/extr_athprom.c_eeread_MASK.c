
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
typedef int off ;
typedef int eedata ;
typedef void* caddr_t ;
struct TYPE_3__ {int ad_id; int ad_in_size; int ad_out_size; int ad_name; void* ad_out_data; void* ad_in_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static u_int16_t
FUNC_2(u_int16_t VAR_6)
{
 u_int16_t VAR_7;

 VAR_4.ad_id = VAR_2 | VAR_1 | VAR_0;
 VAR_4.ad_in_size = sizeof(VAR_6);
 VAR_4.ad_in_data = (caddr_t) &VAR_6;
 VAR_4.ad_out_size = sizeof(VAR_7);
 VAR_4.ad_out_data = (caddr_t) &VAR_7;
 if (FUNC_1(VAR_5, VAR_3, &VAR_4) < 0)
  FUNC_0(1, "ioctl: %s", VAR_4.ad_name);
 return VAR_7;
}
