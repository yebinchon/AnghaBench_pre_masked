
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int allocated_pages; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_1 (int,int ) ;
 int FUNC_2 (size_t,int *) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (size_t) ;
 unsigned long FUNC_6 (struct page*) ;
 int FUNC_7 (struct device*,struct page*,int ,size_t,int ,int ) ;
 int FUNC_8 (struct device*) ;
 struct zpci_dev* FUNC_9 (int ) ;

__attribute__((used)) static void *FUNC_10(struct device *VAR_3, size_t VAR_4,
       dma_addr_t *VAR_5, gfp_t VAR_6,
       unsigned long VAR_7)
{
 struct zpci_dev *VAR_8 = FUNC_9(FUNC_8(VAR_3));
 struct page *VAR_9;
 unsigned long VAR_10;
 dma_addr_t VAR_11;

 VAR_4 = FUNC_0(VAR_4);
 VAR_9 = FUNC_1(VAR_6 | VAR_2, FUNC_5(VAR_4));
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = FUNC_6(VAR_9);
 VAR_11 = FUNC_7(VAR_3, VAR_9, 0, VAR_4, VAR_0, 0);
 if (FUNC_3(VAR_3, VAR_11)) {
  FUNC_4(VAR_10, FUNC_5(VAR_4));
  return ((void*)0);
 }

 FUNC_2(VAR_4 / VAR_1, &VAR_8->allocated_pages);
 if (VAR_5)
  *VAR_5 = VAR_11;
 return (void *) VAR_10;
}
