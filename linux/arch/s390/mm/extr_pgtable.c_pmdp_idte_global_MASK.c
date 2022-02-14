
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ allow_gmap_hpage_1m; int asce; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int *,int,int ,int ) ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (struct mm_struct*) ;

__attribute__((used)) static inline void FUNC_5(struct mm_struct *VAR_5,
        unsigned long VAR_6, pmd_t *VAR_7)
{
 if (VAR_4) {
  FUNC_1(VAR_6, VAR_7, VAR_2 | VAR_1,
       VAR_5->context.asce, VAR_0);
  if (FUNC_4(VAR_5) && VAR_5->context.allow_gmap_hpage_1m)
   FUNC_3(VAR_5, VAR_6);
 } else if (VAR_3) {
  FUNC_1(VAR_6, VAR_7, 0, 0, VAR_0);
  if (FUNC_4(VAR_5) && VAR_5->context.allow_gmap_hpage_1m)
   FUNC_3(VAR_5, VAR_6);
 } else {
  FUNC_0(VAR_7);
  if (FUNC_4(VAR_5) && VAR_5->context.allow_gmap_hpage_1m)
   FUNC_2(VAR_5, VAR_6);
 }
}
