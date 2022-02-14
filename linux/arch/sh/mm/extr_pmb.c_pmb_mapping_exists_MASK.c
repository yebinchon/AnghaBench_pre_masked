
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmb_entry {unsigned long vpn; unsigned long size; scalar_t__ ppn; struct pmb_entry* link; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (struct pmb_entry*) ;
 struct pmb_entry* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static bool FUNC_4(unsigned long VAR_3, phys_addr_t VAR_4,
          unsigned long VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_2);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  struct pmb_entry *VAR_7, *VAR_8;
  unsigned long VAR_9;

  if (!FUNC_3(VAR_6, VAR_1))
   continue;

  VAR_7 = &VAR_0[VAR_6];




  if ((VAR_3 < VAR_7->vpn) || (VAR_3 >= (VAR_7->vpn + VAR_7->size)))
   continue;
  if ((VAR_4 < VAR_7->ppn) || (VAR_4 >= (VAR_7->ppn + VAR_7->size)))
   continue;




  if (VAR_5 <= VAR_7->size) {
   FUNC_2(&VAR_2);
   return 1;
  }

  VAR_9 = VAR_7->size;





  for (VAR_8 = VAR_7->link; VAR_8; VAR_8 = VAR_8->link)
   VAR_9 += VAR_8->size;




  if (VAR_5 <= VAR_9) {
   FUNC_2(&VAR_2);
   return 1;
  }
 }

 FUNC_2(&VAR_2);
 return 0;
}
