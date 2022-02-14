
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int *,int,int,int *,unsigned int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_3, pte_t *VAR_4, bool VAR_5,
      unsigned int VAR_6)
{
 if (VAR_5) {
  FUNC_3(VAR_4, 0, sizeof(long) << VAR_1);
 } else {
  pte_t *VAR_7 = VAR_4;
  unsigned long VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8, ++VAR_7) {
   if (FUNC_5(*VAR_7) == 0)
    continue;
   FUNC_0(1);
   FUNC_2(VAR_3, VAR_7,
      FUNC_4(*VAR_7) << VAR_0,
      VAR_0, ((void*)0), VAR_6);
  }
 }

 FUNC_1(VAR_4);
}
