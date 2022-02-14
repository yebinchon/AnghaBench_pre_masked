
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int slot; } ;
struct pvo_entry {int pvo_vpn; TYPE_1__ pvo_pte; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int*,int*,int*,int*,int*) ;
 int VAR_6 ;

__attribute__((used)) static int64_t
FUNC_2(struct pvo_entry *VAR_7)
{
 uint64_t VAR_8[4], VAR_9;

 FUNC_0();
 FUNC_1(VAR_6, VAR_7->pvo_pte.slot & ~0x3UL,
     &VAR_8[0], &VAR_8[1], &VAR_8[2], &VAR_8[3],
     &VAR_9);


 if ((VAR_8[VAR_7->pvo_pte.slot & 0x3] & VAR_2) !=
     ((VAR_7->pvo_vpn >> (VAR_0 - VAR_1)) &
     VAR_2))
  return (-1);
 if (!(VAR_8[VAR_7->pvo_pte.slot & 0x3] & VAR_5))
  return (-1);






 return ((VAR_9 >> ((3 - (VAR_7->pvo_pte.slot & 0x3))*16)) &
     (VAR_3 | VAR_4));
}
