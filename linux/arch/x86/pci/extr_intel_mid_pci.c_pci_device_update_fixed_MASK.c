
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {unsigned int number; } ;
struct TYPE_2__ {int (* write ) (unsigned int,unsigned int,unsigned int,int,int,unsigned long) ;int (* read ) (unsigned int,unsigned int,unsigned int,int,int,int*) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct pci_bus*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int,int,int*) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,int,int,unsigned long) ;
 int FUNC_3 (unsigned int,unsigned int,unsigned int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_2, unsigned int VAR_3,
       int VAR_4, int VAR_5, u32 VAR_6, int VAR_7)
{
 u32 VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11 = (VAR_4 - VAR_0) >> 2;

 VAR_9 = FUNC_0(VAR_2);
 VAR_10 = VAR_2->number;

 if (VAR_6 == ~0 && VAR_5 == 4) {
  unsigned long VAR_12;

  VAR_1->read(VAR_9, VAR_10, VAR_3,
          VAR_7 + 8 + (VAR_11 * 4), 4, &VAR_8);


  if (VAR_8) {
   VAR_12 = VAR_8 - 1;
   VAR_12 |= VAR_12 >> 1;
   VAR_12 |= VAR_12 >> 2;
   VAR_12 |= VAR_12 >> 4;
   VAR_12 |= VAR_12 >> 8;
   VAR_12 |= VAR_12 >> 16;
   VAR_12++;
   VAR_12 = ~(VAR_12 - 1);
  } else {
   VAR_12 = 0;
  }







  return VAR_1->write(VAR_9, VAR_10, VAR_3, VAR_4, 4,
           VAR_12);
 }


 return VAR_1->write(VAR_9, VAR_10, VAR_3, VAR_4, VAR_5, VAR_6);
}
