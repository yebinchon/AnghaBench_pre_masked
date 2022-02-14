
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zpci_dev*,int ,size_t,int) ;
 int FUNC_1 (struct zpci_dev*,unsigned long,int ,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct zpci_dev *VAR_3, unsigned long VAR_4,
       dma_addr_t VAR_5, size_t VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_5, VAR_6, VAR_7);
 if (VAR_8 && ((VAR_7 & VAR_2) == VAR_1))
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_0);

 return VAR_8;
}
