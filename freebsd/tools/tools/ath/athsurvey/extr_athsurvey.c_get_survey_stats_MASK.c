
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ath_diag {int ad_id; int ad_out_size; int ad_name; scalar_t__ ad_out_data; int * ad_in_data; scalar_t__ ad_in_size; } ;
typedef scalar_t__ caddr_t ;
typedef int atd ;
typedef int HAL_CHANNEL_SURVEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int,int ,struct ath_diag*) ;
 int FUNC_2 (struct ath_diag*,char,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, const char *VAR_4, HAL_CHANNEL_SURVEY *VAR_5)
{
 uint16_t VAR_6;
 struct ath_diag VAR_7;

 FUNC_2(&VAR_7, '\0', sizeof(VAR_7));

 VAR_7.ad_id = VAR_1 | VAR_0;
 VAR_7.ad_in_size = 0;
 VAR_7.ad_in_data = ((void*)0);
 VAR_7.ad_out_size = sizeof(HAL_CHANNEL_SURVEY);
 VAR_7.ad_out_data = (caddr_t) VAR_5;
 FUNC_3(VAR_7.ad_name, VAR_4, sizeof(VAR_7.ad_name));

 if (FUNC_1(VAR_3, VAR_2, &VAR_7) < 0) {
  FUNC_0(1, "ioctl: %s", VAR_7.ad_name);
  return (0);
 }
 return (1);
}
