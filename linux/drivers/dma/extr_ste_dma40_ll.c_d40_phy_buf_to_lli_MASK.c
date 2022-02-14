
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stedma40_half_channel_info {int data_width; } ;
struct d40_phy_lli {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct d40_phy_lli*,int,int,int,int,struct stedma40_half_channel_info*,unsigned long) ;
 int FUNC_2 (int,int ,int ) ;

__attribute__((used)) static struct d40_phy_lli *
FUNC_3(struct d40_phy_lli *VAR_5, dma_addr_t VAR_6, u32 VAR_7,
     dma_addr_t VAR_8, dma_addr_t VAR_9, u32 VAR_10,
     struct stedma40_half_channel_info *VAR_11,
     struct stedma40_half_channel_info *VAR_12,
     unsigned long VAR_13)
{
 bool VAR_14 = VAR_13 & VAR_3;
 bool VAR_15 = VAR_13 & VAR_1;
 bool VAR_16 = VAR_13 & VAR_4;
 bool VAR_17 = VAR_13 & VAR_2;
 int VAR_18;
 dma_addr_t VAR_19 = VAR_8;
 int VAR_20 = VAR_7;
 int VAR_21 = 0;





 if (VAR_16)
  VAR_13 &= ~VAR_4;

 do {
  VAR_21 = FUNC_2(VAR_20, VAR_11->data_width,
     VAR_12->data_width);
  VAR_20 -= VAR_21;

  if (VAR_20 == 0 && VAR_16)
   VAR_13 |= VAR_4;

  if (VAR_20 == 0 && VAR_14)
   VAR_19 = VAR_17 ? VAR_9 : 0;
  else
   VAR_19 = FUNC_0(VAR_19 + sizeof(struct d40_phy_lli),
         VAR_0);

  VAR_18 = FUNC_1(VAR_5, VAR_6, VAR_21, VAR_19,
           VAR_10, VAR_11, VAR_13);

  if (VAR_18)
   goto err;

  VAR_5++;
  if (VAR_15)
   VAR_6 += VAR_21;
 } while (VAR_20);

 return VAR_5;

err:
 return ((void*)0);
}
