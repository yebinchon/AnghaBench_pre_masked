
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct rbd_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rbd_device*,int ) ;
 int FUNC_1 (struct rbd_device*) ;

__attribute__((used)) static bool FUNC_2(struct rbd_device *VAR_1, u64 VAR_2)
{
 u8 VAR_3;


 if (!FUNC_1(VAR_1))
  return 1;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 return VAR_3 != VAR_0;
}
