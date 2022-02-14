
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_bus {scalar_t__ number; TYPE_1__* parent; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u32 FUNC_5(struct pci_bus *VAR_1, unsigned int VAR_2,
 int VAR_3)
{
 u32 VAR_4;
 u32 *VAR_5;

 VAR_3 &= ~3;
 if (FUNC_2()) {

  if (VAR_1->number == 0) {

   if (FUNC_1(VAR_2) != 0 ||
        !FUNC_3(FUNC_0(VAR_2)))
    return 0xffffffff;
  } else if (VAR_1->parent->number == 0) {
   if (FUNC_1(VAR_2) == 0)
    return 0xffffffff;
   if (VAR_2 == 44)
    return 0xffffffff;
  }
 } else if (VAR_1->number == 0 && FUNC_1(VAR_2) == 1 && VAR_3 == 0x954) {
  return 0xffffffff;
 }
 VAR_5 = (u32 *)(VAR_0 +
   FUNC_4(VAR_1->number, VAR_2, VAR_3));
 VAR_4 = *VAR_5;
 return VAR_4;
}
