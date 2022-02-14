
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct bcma_drv_pci {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcma_drv_pci*,unsigned int,unsigned int,int,...) ;

__attribute__((used)) static u8 FUNC_1(struct bcma_drv_pci *VAR_6, unsigned int VAR_7,
       unsigned int VAR_8, u8 VAR_9,
       unsigned char *VAR_10, u32 *VAR_11)
{
 u8 VAR_12;
 u8 VAR_13 = 0;
 u32 VAR_14;
 u8 VAR_15;


 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_2, &VAR_15,
    sizeof(u8));
 if ((VAR_15 & 0x7F) != VAR_3)
  return VAR_13;


 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4, &VAR_15,
    sizeof(u8));
 if (!(VAR_15 & VAR_5))
  return VAR_13;


 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_0, &VAR_13,
    sizeof(u8));
 if (VAR_13 == 0x00)
  return VAR_13;



 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_13, &VAR_12, sizeof(u8));
 while (VAR_12 != VAR_9) {
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_13 + 1, &VAR_13,
     sizeof(u8));
  if (VAR_13 == 0x00)
   return VAR_13;
  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_13, &VAR_12,
     sizeof(u8));
 }


 if ((VAR_10 != ((void*)0)) && (VAR_11 != ((void*)0))) {
  u8 VAR_16;

  VAR_14 = *VAR_11;
  if (!VAR_14)
   return VAR_13;

  *VAR_11 = 0;


  VAR_16 = VAR_13 + 2;
  if ((VAR_14 + VAR_16) > VAR_1)
   VAR_14 = VAR_1 - VAR_16;
  *VAR_11 = VAR_14;
  while (VAR_14--) {
   FUNC_0(VAR_6, VAR_7, VAR_8, VAR_16, VAR_10,
      sizeof(u8));
   VAR_16++;
   VAR_10++;
  }
 }

 return VAR_13;
}
