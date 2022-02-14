
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct afe4403_data {int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,...) ;

__attribute__((used)) static int FUNC_1(struct afe4403_data *VAR_3, unsigned int VAR_4, u32 *VAR_5)
{
 u8 VAR_6[4] = {VAR_0, 0x0, 0x0, VAR_1};
 u8 VAR_7[3];
 int VAR_8;


 VAR_8 = FUNC_0(VAR_3->spi, VAR_6, 4, ((void*)0), 0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_3->spi, &VAR_4, 1, VAR_7, 3);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = (VAR_7[0] << 16) |
  (VAR_7[1] << 8) |
  (VAR_7[2]);


 VAR_6[3] = VAR_2;
 VAR_8 = FUNC_0(VAR_3->spi, VAR_6, 4, ((void*)0), 0);
 if (VAR_8)
  return VAR_8;

 return 0;
}
