
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cdn_dp_device*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct cdn_dp_device *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 *VAR_2 = 0;
 VAR_3 = FUNC_1(VAR_1, VAR_0, &VAR_4, 1);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = FUNC_0(VAR_4);
 return 0;
}
