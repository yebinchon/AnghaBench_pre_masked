
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmb_entry {unsigned long size; int lock; struct pmb_entry* link; } ;
typedef unsigned long phys_addr_t ;
typedef int pgprot_t ;
struct TYPE_3__ {unsigned long size; unsigned long flag; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pmb_entry*) ;
 int VAR_2 ;
 int FUNC_2 (struct pmb_entry*) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct pmb_entry*) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (struct pmb_entry*) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (unsigned long,unsigned long) ;
 struct pmb_entry* FUNC_9 (unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long,unsigned long) ;
 TYPE_1__* VAR_5 ;
 int FUNC_11 (struct pmb_entry*,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;

int FUNC_16(unsigned long VAR_6, phys_addr_t VAR_7,
       unsigned long VAR_8, pgprot_t VAR_9)
{
 struct pmb_entry *VAR_10, *VAR_11;
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16, VAR_17;

 if (VAR_8 < VAR_4)
  return -VAR_1;
 if (!FUNC_8(VAR_6, VAR_8))
  return -VAR_0;
 if (FUNC_10(VAR_6, VAR_7, VAR_8))
  return 0;

 VAR_12 = VAR_6;
 VAR_13 = VAR_8;

 FUNC_5(VAR_6, VAR_6 + VAR_8);

 VAR_15 = FUNC_7(VAR_9);
 VAR_10 = ((void*)0);

 do {
  for (VAR_16 = VAR_17 = 0; VAR_16 < FUNC_0(VAR_5); VAR_16++) {
   if (VAR_8 < VAR_5[VAR_16].size)
    continue;

   VAR_11 = FUNC_9(VAR_6, VAR_7, VAR_15 |
      VAR_5[VAR_16].flag, VAR_2);
   if (FUNC_1(VAR_11)) {
    FUNC_11(VAR_10, VAR_17);
    return FUNC_2(VAR_11);
   }

   FUNC_12(&VAR_11->lock, VAR_14);

   VAR_11->size = VAR_5[VAR_16].size;

   FUNC_3(VAR_11);

   VAR_7 += VAR_11->size;
   VAR_6 += VAR_11->size;
   VAR_8 -= VAR_11->size;





   if (FUNC_6(VAR_10)) {
    FUNC_13(&VAR_10->lock,
           VAR_3);
    VAR_10->link = VAR_11;
    FUNC_14(&VAR_10->lock);
   }

   VAR_10 = VAR_11;






   VAR_16--;
   VAR_17++;

   FUNC_15(&VAR_11->lock, VAR_14);
  }
 } while (VAR_8 >= VAR_4);

 FUNC_4(VAR_12, VAR_12 + VAR_13);

 return 0;
}
