
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct ib_device *VAR_2, enum ib_mtu VAR_3)
{
 int VAR_4;


 if (VAR_3 == (enum ib_mtu)VAR_0)
  VAR_3 = VAR_1;
 VAR_4 = FUNC_1((int)VAR_3);
 if (VAR_4 > 0)
  return VAR_4;
 return FUNC_0(VAR_3);
}
