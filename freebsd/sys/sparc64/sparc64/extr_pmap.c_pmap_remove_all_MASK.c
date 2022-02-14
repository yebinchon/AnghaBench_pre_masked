
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
struct tte {int tte_data; } ;
struct TYPE_10__ {int resident_count; int wired_count; } ;
struct pmap {TYPE_2__ pm_stats; } ;
struct TYPE_9__ {int tte_list; } ;
struct TYPE_11__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pmap*) ;
 int FUNC_2 (struct pmap*) ;
 struct tte* FUNC_3 (int *) ;
 struct tte* FUNC_4 (struct tte*,int ) ;
 int FUNC_5 (int *,struct tte*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pmap* FUNC_6 (struct tte*) ;
 int FUNC_7 (struct tte*) ;
 int FUNC_8 (struct tte*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct pmap*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*) ;

void
FUNC_16(vm_page_t VAR_10)
{
 struct pmap *VAR_11;
 struct tte *VAR_12;
 struct tte *VAR_13;
 vm_offset_t VAR_14;

 FUNC_0((VAR_10->oflags & VAR_7) == 0,
     ("pmap_remove_all: page %p is not managed", VAR_10));
 FUNC_10(&VAR_9);
 for (VAR_13 = FUNC_3(&VAR_10->md.tte_list); VAR_13 != ((void*)0); VAR_13 = VAR_12) {
  VAR_12 = FUNC_4(VAR_13, VAR_8);
  if ((VAR_13->tte_data & VAR_2) == 0)
   continue;
  VAR_11 = FUNC_6(VAR_13);
  VAR_14 = FUNC_7(VAR_13);
  FUNC_1(VAR_11);
  if ((VAR_13->tte_data & VAR_6) != 0)
   VAR_11->pm_stats.wired_count--;
  if ((VAR_13->tte_data & VAR_3) != 0)
   FUNC_14(VAR_10, VAR_0);
  if ((VAR_13->tte_data & VAR_5) != 0)
   FUNC_15(VAR_10);
  VAR_13->tte_data &= ~VAR_4;
  FUNC_12(VAR_11, VAR_14);
  FUNC_5(&VAR_10->md.tte_list, VAR_13, VAR_8);
  VAR_11->pm_stats.resident_count--;
  FUNC_9(VAR_10, VAR_14);
  FUNC_8(VAR_13);
  FUNC_2(VAR_11);
 }
 FUNC_13(VAR_10, VAR_1);
 FUNC_11(&VAR_9);
}
