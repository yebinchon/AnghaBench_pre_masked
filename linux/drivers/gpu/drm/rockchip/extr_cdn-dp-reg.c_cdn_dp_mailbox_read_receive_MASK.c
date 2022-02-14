
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct cdn_dp_device {int dummy; } ;


 int FUNC_0 (struct cdn_dp_device*) ;

__attribute__((used)) static int FUNC_1(struct cdn_dp_device *VAR_0,
           u8 *VAR_1, u16 VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_1[VAR_3] = VAR_4;
 }

 return 0;
}
