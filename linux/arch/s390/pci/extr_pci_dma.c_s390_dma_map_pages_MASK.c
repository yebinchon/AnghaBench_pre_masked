
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int mapped_pages; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long,int *) ;
 scalar_t__ FUNC_1 (struct device*,unsigned long) ;
 int FUNC_2 (struct device*,scalar_t__,unsigned long) ;
 int FUNC_3 (struct zpci_dev*,unsigned long,scalar_t__,size_t,int) ;
 unsigned long FUNC_4 (unsigned long,size_t,unsigned long) ;
 unsigned long FUNC_5 (struct page*) ;
 int FUNC_6 (struct device*) ;
 struct zpci_dev* FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_10(struct device *VAR_8, struct page *VAR_9,
         unsigned long VAR_10, size_t VAR_11,
         enum dma_data_direction VAR_12,
         unsigned long VAR_13)
{
 struct zpci_dev *VAR_14 = FUNC_7(FUNC_6(VAR_8));
 unsigned long VAR_15 = FUNC_5(VAR_9) + VAR_10;
 int VAR_16 = VAR_6;
 unsigned long VAR_17;
 dma_addr_t VAR_18;
 int VAR_19;


 VAR_17 = FUNC_4(VAR_15, VAR_11, VAR_5);
 VAR_18 = FUNC_1(VAR_8, VAR_17);
 if (VAR_18 == VAR_0) {
  VAR_19 = -VAR_3;
  goto out_err;
 }


 VAR_11 = VAR_17 * VAR_5;

 if (VAR_12 == VAR_1 || VAR_12 == VAR_2)
  VAR_16 |= VAR_7;

 VAR_19 = FUNC_3(VAR_14, VAR_15, VAR_18, VAR_11, VAR_16);
 if (VAR_19)
  goto out_free;

 FUNC_0(VAR_17, &VAR_14->mapped_pages);
 return VAR_18 + (VAR_10 & ~VAR_4);

out_free:
 FUNC_2(VAR_8, VAR_18, VAR_17);
out_err:
 FUNC_8("map error:\n");
 FUNC_9(VAR_19, VAR_15);
 return VAR_0;
}
