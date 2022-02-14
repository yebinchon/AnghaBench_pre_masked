
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ offset; int length; } ;
struct saa7146_pgtable {scalar_t__ offset; int * cpu; } ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;

int FUNC_3(struct pci_dev *VAR_1, struct saa7146_pgtable *VAR_2,
 struct scatterlist *VAR_3, int VAR_4 )
{
 __le32 *VAR_5, VAR_6;
 int VAR_7 = 0;
 int VAR_8,VAR_9;

 FUNC_0(0 == VAR_4);
 FUNC_0(VAR_3->offset > VAR_0);



 VAR_2->offset = VAR_3->offset;

 VAR_5 = VAR_2->cpu;
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_3++) {





  for (VAR_9 = 0; VAR_9 * 4096 < VAR_3->length; VAR_9++, VAR_5++) {
   *VAR_5 = FUNC_1(FUNC_2(VAR_3) + VAR_9 * 4096);
   VAR_7++;
  }
 }



 VAR_6 = *(VAR_5-1);
 for(VAR_8=VAR_7;VAR_8<1024;VAR_8++) {
  *VAR_5++ = VAR_6;
 }
 return 0;
}
