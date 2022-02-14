
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int svc_cmd ;
struct device {int dummy; } ;
typedef int ret_val ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int ,int *,int,int *,int) ;

int FUNC_3(struct device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;
 __le32 VAR_6 = FUNC_0((VAR_3 << 10) | VAR_4);
 __le32 VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_0,
       &VAR_6, sizeof(VAR_6), &VAR_7,
       sizeof(VAR_7));
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_7);
}
