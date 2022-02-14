
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct e752x_error_info {int ferr_global; int nerr_global; } ;


 int FUNC_0 (struct mem_ctl_info*,struct e752x_error_info*,int*,int) ;
 int FUNC_1 (struct e752x_error_info*,int*,int) ;
 int FUNC_2 (struct e752x_error_info*,int*,int) ;
 int FUNC_3 (struct e752x_error_info*,int*,int) ;
 int FUNC_4 (struct e752x_error_info*,int*,int) ;
 int FUNC_5 (int,int,int*,int) ;

__attribute__((used)) static int FUNC_6(struct mem_ctl_info *VAR_0,
    struct e752x_error_info *VAR_1,
    int VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_3 = (VAR_1->ferr_global >> 18) & 0x3ff;
 VAR_4 = (VAR_1->ferr_global >> 4) & 0x7ff;

 if (VAR_3)
  FUNC_5(1, VAR_3, &VAR_5, VAR_2);

 if (VAR_4)
  FUNC_5(0, VAR_4, &VAR_5, VAR_2);

 VAR_3 = (VAR_1->nerr_global >> 18) & 0x3ff;
 VAR_4 = (VAR_1->nerr_global >> 4) & 0x7ff;

 if (VAR_3)
  FUNC_5(1, VAR_3, &VAR_5, VAR_2);

 if (VAR_4)
  FUNC_5(0, VAR_4, &VAR_5, VAR_2);

 FUNC_1(VAR_1, &VAR_5, VAR_2);
 FUNC_3(VAR_1, &VAR_5, VAR_2);
 FUNC_4(VAR_1, &VAR_5, VAR_2);
 FUNC_2(VAR_1, &VAR_5, VAR_2);
 FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_2);
 return VAR_5;
}
