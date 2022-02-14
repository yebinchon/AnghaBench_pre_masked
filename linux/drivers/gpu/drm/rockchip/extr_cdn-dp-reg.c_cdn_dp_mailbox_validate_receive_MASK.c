
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cdn_dp_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdn_dp_device*) ;

__attribute__((used)) static int FUNC_1(struct cdn_dp_device *VAR_1,
        u8 VAR_2, u8 VAR_3,
        u16 VAR_4)
{
 u32 VAR_5, VAR_6;
 u8 VAR_7[4];
 int VAR_8;


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_8 = FUNC_0(VAR_1);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_7[VAR_6] = VAR_8;
 }

 VAR_5 = (VAR_7[2] << 8) | VAR_7[3];

 if (VAR_3 != VAR_7[0] || VAR_2 != VAR_7[1] ||
     VAR_4 != VAR_5) {




  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   if (FUNC_0(VAR_1) < 0)
    break;

  return -VAR_0;
 }

 return 0;
}
