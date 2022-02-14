
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {unsigned long start; scalar_t__ attribute; scalar_t__ num_pages; } ;
typedef TYPE_1__ kern_memdesc_t ;
typedef scalar_t__ (* efi_freemem_callback_t ) (scalar_t__,scalar_t__,void*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,void*) ;

__attribute__((used)) static void
FUNC_2 (efi_freemem_callback_t VAR_6, void *VAR_7, u64 VAR_8)
{
 kern_memdesc_t *VAR_9;
 u64 VAR_10, VAR_11, VAR_12;

 VAR_12 = (VAR_8 == VAR_0) ? VAR_3 : VAR_4;
 for (VAR_9 = VAR_5; VAR_9->start != ~0UL; VAR_9++) {
  if (VAR_9->attribute != VAR_8)
   continue;
  VAR_10 = FUNC_0(VAR_9->start);
  VAR_11 = (VAR_9->start + (VAR_9->num_pages << VAR_1)) & VAR_2;
  if (VAR_10 < VAR_11)
   if ((*VAR_6)(VAR_10 + VAR_12, VAR_11 + VAR_12, VAR_7) < 0)
    return;
 }
}
