
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u64 ;
typedef scalar_t__ u32 ;
struct qib_devdata {int flags; TYPE_1__* cspec; } ;
struct TYPE_2__ {unsigned long long int_enable_mask; scalar_t__ num_msix_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long FUNC_0 (struct qib_devdata*,int ) ;
 int FUNC_1 (struct qib_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_4, u32 VAR_5)
{
 if (VAR_5) {
  if (VAR_4->flags & VAR_0)
   return;
  FUNC_1(VAR_4, VAR_3, VAR_4->cspec->int_enable_mask);

  FUNC_1(VAR_4, VAR_1, 0ULL);
  if (VAR_4->cspec->num_msix_entries) {

   u64 VAR_6 = FUNC_0(VAR_4, VAR_2);

   if (VAR_6)
    FUNC_1(VAR_4, VAR_2, VAR_6);
  }
 } else
  FUNC_1(VAR_4, VAR_3, 0ULL);
}
