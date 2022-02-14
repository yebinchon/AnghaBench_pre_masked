
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct panfrost_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct panfrost_device*,int,int ,size_t) ;
 int FUNC_1 (struct panfrost_device*,int) ;
 int FUNC_2 (struct panfrost_device*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct panfrost_device *VAR_1, int VAR_2,
          u64 VAR_3, size_t VAR_4, u32 VAR_5)
{
 if (VAR_2 < 0)
  return 0;

 if (VAR_5 != VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);


 FUNC_2(VAR_1, VAR_2, VAR_5);


 return FUNC_1(VAR_1, VAR_2);
}
