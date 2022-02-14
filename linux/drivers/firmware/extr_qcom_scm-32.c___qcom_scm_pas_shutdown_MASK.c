
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef int out ;
typedef int in ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int ,int *,int,int *,int) ;

int FUNC_3(struct device *VAR_2, u32 VAR_3)
{
 __le32 VAR_4;
 __le32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_2(VAR_2, VAR_1,
       VAR_0,
       &VAR_5, sizeof(VAR_5),
       &VAR_4, sizeof(VAR_4));

 return VAR_6 ? : FUNC_1(VAR_4);
}
