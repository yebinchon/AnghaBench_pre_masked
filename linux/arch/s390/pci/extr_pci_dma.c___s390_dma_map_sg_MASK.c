
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int mapped_pages; } ;
struct scatterlist {scalar_t__ offset; scalar_t__ length; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (size_t) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct zpci_dev*,scalar_t__,size_t,int) ;
 int FUNC_2 (struct zpci_dev*,unsigned long,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (unsigned long,int *) ;
 scalar_t__ FUNC_4 (struct device*,unsigned long) ;
 int FUNC_5 (struct device*,scalar_t__,unsigned long) ;
 int FUNC_6 (struct zpci_dev*,int ,scalar_t__,scalar_t__,int ) ;
 unsigned long FUNC_7 (int ) ;
 struct scatterlist* FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (struct device*) ;
 struct zpci_dev* FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_8, struct scatterlist *VAR_9,
        size_t VAR_10, dma_addr_t *VAR_11,
        enum dma_data_direction VAR_12)
{
 unsigned long VAR_13 = FUNC_0(VAR_10) >> VAR_4;
 struct zpci_dev *VAR_14 = FUNC_11(FUNC_10(VAR_8));
 dma_addr_t VAR_15, VAR_16;
 int VAR_17 = VAR_6;
 struct scatterlist *VAR_18;
 unsigned long VAR_19 = 0;
 int VAR_20;

 VAR_15 = FUNC_4(VAR_8, VAR_13);
 if (VAR_15 == VAR_0)
  return -VAR_3;

 VAR_16 = VAR_15;
 if (VAR_12 == VAR_1 || VAR_12 == VAR_2)
  VAR_17 |= VAR_7;

 for (VAR_18 = VAR_9; VAR_16 < VAR_15 + VAR_10; VAR_18 = FUNC_8(VAR_18)) {
  VAR_19 = FUNC_7(FUNC_9(VAR_18));
  VAR_20 = FUNC_2(VAR_14, VAR_19, VAR_16,
      VAR_18->offset + VAR_18->length, VAR_17);
  if (VAR_20)
   goto unmap;

  VAR_16 += VAR_18->offset + VAR_18->length;
 }
 VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_10, VAR_17);
 if (VAR_20)
  goto unmap;

 *VAR_11 = VAR_15;
 FUNC_3(VAR_13, &VAR_14->mapped_pages);

 return VAR_20;

unmap:
 FUNC_6(VAR_14, 0, VAR_15, VAR_16 - VAR_15,
    VAR_5);
 FUNC_5(VAR_8, VAR_15, VAR_13);
 FUNC_12("map error:\n");
 FUNC_13(VAR_20, VAR_19);
 return VAR_20;
}
