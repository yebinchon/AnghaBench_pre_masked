
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct rbd_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int ) ;
 char* FUNC_1 (struct rbd_device*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rbd_device*,int ) ;

__attribute__((used)) static const char *FUNC_3(struct rbd_device *VAR_3,
     u64 VAR_4)
{
 u32 VAR_5;
 const char *VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 == VAR_0)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_1(VAR_3, VAR_5);
 return VAR_6 ? VAR_6 : FUNC_0(-VAR_2);
}
