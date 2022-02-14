
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_11__ {int attribute; int phys_addr; int num_pages; int virt_addr; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_1__*,unsigned long,unsigned long,int ,int *) ;
 int VAR_6 ;

void FUNC_9(efi_memory_desc_t *VAR_7, unsigned long VAR_8,
       unsigned long VAR_9, efi_memory_desc_t *VAR_10,
       int *VAR_11)
{
 u64 VAR_12 = VAR_6;
 efi_memory_desc_t *VAR_13, *VAR_14 = ((void*)0), *VAR_15 = VAR_10;
 int VAR_16;
 if (FUNC_1(VAR_0))
  FUNC_8(VAR_7, VAR_8 / VAR_9, VAR_9, VAR_5,
       ((void*)0));

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16 += VAR_9, VAR_14 = VAR_13) {
  u64 VAR_17, VAR_18;

  VAR_13 = (void *)VAR_7 + VAR_16;
  if (!(VAR_13->attribute & VAR_1))
   continue;

  VAR_17 = VAR_13->phys_addr;
  VAR_18 = VAR_13->num_pages * VAR_2;

  if (FUNC_3()) {
   VAR_13->virt_addr = VAR_13->phys_addr;
   continue;
  }






  if ((FUNC_1(VAR_0) &&
       !FUNC_4(VAR_14, VAR_13)) ||
      !FUNC_5(VAR_14, VAR_13)) {

   VAR_17 = FUNC_6(VAR_13->phys_addr, VAR_4);
   VAR_18 += VAR_13->phys_addr - VAR_17;







   if (FUNC_0(VAR_13->phys_addr, VAR_3) && VAR_18 >= VAR_3)
    VAR_12 = FUNC_7(VAR_12, VAR_3);
   else
    VAR_12 = FUNC_7(VAR_12, VAR_4);
  }

  VAR_13->virt_addr = VAR_12 + VAR_13->phys_addr - VAR_17;
  VAR_12 += VAR_18;

  FUNC_2(VAR_15, VAR_13, VAR_9);
  VAR_15 = (void *)VAR_15 + VAR_9;
  ++*VAR_11;
 }
}
