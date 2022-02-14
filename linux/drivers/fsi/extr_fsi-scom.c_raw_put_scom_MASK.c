
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct scom_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scom_device*,int,int,int *) ;
 int FUNC_1 (struct scom_device*,int,int,int *) ;
 int FUNC_2 (struct scom_device*,int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct scom_device *VAR_2, uint64_t VAR_3,
   uint64_t VAR_4, uint32_t *VAR_5)
{
 if (VAR_4 & VAR_0) {
  if (VAR_4 & VAR_1)
   return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
  else
   return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 } else
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
