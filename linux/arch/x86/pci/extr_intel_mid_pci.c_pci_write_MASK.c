
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {int number; } ;
struct TYPE_4__ {int (* write ) (int ,int ,unsigned int,int,int,int ) ;} ;
struct TYPE_3__ {int (* write ) (int ,int ,unsigned int,int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_bus*,unsigned int) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int,int ,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (struct pci_bus*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (int ,int ,unsigned int,int,int,int ) ;
 int FUNC_4 (int ,int ,unsigned int,int,int,int ) ;
 scalar_t__ FUNC_5 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_5, unsigned int VAR_6, int VAR_7,
       int VAR_8, u32 VAR_9)
{
 int VAR_10;





 if (VAR_7 == VAR_2)
  return 0;







 VAR_10 = FUNC_0(VAR_5, VAR_6);
 if (VAR_10 &&
     (VAR_7 >= VAR_0 && VAR_7 <= VAR_1)) {
  return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
            VAR_10);
 }






 if (FUNC_5(VAR_5->number, VAR_6, VAR_7))
  return VAR_3(FUNC_2(VAR_5), VAR_5->number,
           VAR_6, VAR_7, VAR_8, VAR_9);
 return VAR_4->write(FUNC_2(VAR_5), VAR_5->number, VAR_6,
          VAR_7, VAR_8, VAR_9);
}
