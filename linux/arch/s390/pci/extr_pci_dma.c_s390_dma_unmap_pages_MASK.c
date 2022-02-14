
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int unmapped_pages; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct device*,int,int) ;
 int FUNC_2 (struct zpci_dev*,int ,int,int,int ) ;
 int FUNC_3 (int,size_t,int) ;
 int FUNC_4 (struct device*) ;
 struct zpci_dev* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_3, dma_addr_t VAR_4,
     size_t VAR_5, enum dma_data_direction VAR_6,
     unsigned long VAR_7)
{
 struct zpci_dev *VAR_8 = FUNC_5(FUNC_4(VAR_3));
 int VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_1);
 VAR_4 = VAR_4 & VAR_0;
 VAR_10 = FUNC_2(VAR_8, 0, VAR_4, VAR_9 * VAR_1,
          VAR_2);
 if (VAR_10) {
  FUNC_6("unmap error:\n");
  FUNC_7(VAR_10, VAR_4);
  return;
 }

 FUNC_0(VAR_9, &VAR_8->unmapped_pages);
 FUNC_1(VAR_3, VAR_4, VAR_9);
}
