
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int allocated_pages; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct device*,int ,size_t,int ,int ) ;
 int FUNC_5 (struct device*) ;
 struct zpci_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2, size_t VAR_3,
     void *VAR_4, dma_addr_t VAR_5,
     unsigned long VAR_6)
{
 struct zpci_dev *VAR_7 = FUNC_6(FUNC_5(VAR_2));

 VAR_3 = FUNC_0(VAR_3);
 FUNC_1(VAR_3 / VAR_1, &VAR_7->allocated_pages);
 FUNC_4(VAR_2, VAR_5, VAR_3, VAR_0, 0);
 FUNC_2((unsigned long) VAR_4, FUNC_3(VAR_3));
}
