
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pte_hi; } ;
struct TYPE_4__ {TYPE_1__ pte; } ;
struct pvo_entry {TYPE_2__ pvo_pte; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvo_entry const*) ;
 int VAR_1 ;

__attribute__((used)) static __inline int
FUNC_1(const struct pvo_entry *VAR_2, int VAR_3)
{
 int VAR_4;






 VAR_4 = VAR_3 * 8 + FUNC_0(VAR_2);
 if (VAR_2->pvo_pte.pte.pte_hi & VAR_0)
  VAR_4 ^= VAR_1 * 8;

 return (VAR_4);
}
