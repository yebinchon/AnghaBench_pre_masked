
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ib_device const*,int ) ;
 scalar_t__ FUNC_2 (struct ib_device const*,int ) ;

__attribute__((used)) static int FUNC_3(const struct ib_device *VAR_0, u8 VAR_1)
{
 return FUNC_0(!FUNC_1(VAR_0, VAR_1) &&
       FUNC_2(VAR_0, VAR_1) != 0);
}
