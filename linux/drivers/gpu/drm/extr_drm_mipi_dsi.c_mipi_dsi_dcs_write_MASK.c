
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (struct mipi_dsi_device*,int *,size_t) ;

ssize_t FUNC_4(struct mipi_dsi_device *VAR_2, u8 VAR_3,
      const void *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 size_t VAR_7;
 u8 *VAR_8;

 if (VAR_5 > 0) {
  VAR_7 = 1 + VAR_5;

  VAR_8 = FUNC_1(VAR_7, VAR_1);
  if (!VAR_8)
   return -VAR_0;


  VAR_8[0] = VAR_3;
  FUNC_2(&VAR_8[1], VAR_4, VAR_5);
 } else {
  VAR_8 = &VAR_3;
  VAR_7 = 1;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_8, VAR_7);

 if (VAR_5 > 0)
  FUNC_0(VAR_8);

 return VAR_6;
}
