
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef size_t u_int ;
struct lbc_softc {TYPE_2__* sc_range; TYPE_1__* sc_banks; } ;
struct TYPE_4__ {int addr; int size; int kva; } ;
struct TYPE_3__ {int size; int addr; int kva; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct lbc_softc *VAR_3)
{
 vm_paddr_t VAR_4, VAR_5;
 vm_size_t VAR_6;
 u_int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(VAR_3->sc_range, sizeof(VAR_3->sc_range));




 VAR_9 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = VAR_3->sc_banks[VAR_7].size;
  if (VAR_6 == 0)
   continue;

  VAR_5 = VAR_3->sc_banks[VAR_7].addr;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

   VAR_4 = VAR_3->sc_range[VAR_8].addr - 1 + VAR_3->sc_range[VAR_8].size;
   if (VAR_5 > 0 && VAR_4 == VAR_5 - 1) {
    VAR_3->sc_range[VAR_8].size += VAR_6;
    break;
   }

   VAR_4 = VAR_5 - 1 + VAR_6;
   if (VAR_3->sc_range[VAR_8].addr > 0 &&
       VAR_4 == VAR_3->sc_range[VAR_8].addr - 1) {
    VAR_3->sc_range[VAR_8].addr = VAR_5;
    VAR_3->sc_range[VAR_8].size += VAR_6;
    break;
   }
  }
  if (VAR_8 == VAR_9) {

   VAR_8 = 0;
   while (VAR_8 < VAR_9 && VAR_3->sc_range[VAR_8].addr < VAR_5)
    VAR_8++;
   for (VAR_10 = VAR_9; VAR_10 > VAR_8; VAR_10--)
    VAR_3->sc_range[VAR_10] = VAR_3->sc_range[VAR_10-1];
   VAR_3->sc_range[VAR_8].addr = VAR_5;
   VAR_3->sc_range[VAR_8].size = VAR_6;
   VAR_9++;
  }
 }





 VAR_8 = 0;
 while (VAR_8 < VAR_9 - 1) {
  VAR_4 = VAR_3->sc_range[VAR_8].addr + VAR_3->sc_range[VAR_8].size;
  if (VAR_4 != VAR_3->sc_range[VAR_8+1].addr) {
   VAR_8++;
   continue;
  }
  VAR_3->sc_range[VAR_8].size += VAR_3->sc_range[VAR_8+1].size;
  for (VAR_10 = VAR_8 + 1; VAR_10 < VAR_9 - 1; VAR_10++)
   VAR_3->sc_range[VAR_10] = VAR_3->sc_range[VAR_10+1];
  FUNC_0(&VAR_3->sc_range[VAR_10], sizeof(VAR_3->sc_range[VAR_10]));
  VAR_9--;
 }





 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_5 = VAR_3->sc_range[VAR_8].addr;
  VAR_6 = VAR_3->sc_range[VAR_8].size;
  VAR_11 = FUNC_1(VAR_2, VAR_5, VAR_6);
  if (VAR_11)
   return (VAR_11);
  VAR_3->sc_range[VAR_8].kva = (vm_offset_t)FUNC_2(VAR_5, VAR_6);
 }


 if (VAR_9 == 0)
  return (VAR_0);


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = VAR_3->sc_banks[VAR_7].size;
  if (VAR_6 == 0)
   continue;

  VAR_5 = VAR_3->sc_banks[VAR_7].addr;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   VAR_4 = VAR_3->sc_range[VAR_8].addr - 1 + VAR_3->sc_range[VAR_8].size;
   if (VAR_5 >= VAR_3->sc_range[VAR_8].addr &&
       VAR_5 - 1 + VAR_6 <= VAR_4)
    break;
  }
  if (VAR_8 < VAR_9) {
   VAR_3->sc_banks[VAR_7].kva = VAR_3->sc_range[VAR_8].kva +
       (VAR_5 - VAR_3->sc_range[VAR_8].addr);
  }
 }

 return (0);
}
