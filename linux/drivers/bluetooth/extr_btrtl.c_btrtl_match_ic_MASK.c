
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct id_table {int match_flags; scalar_t__ lmp_subver; scalar_t__ hci_rev; scalar_t__ hci_ver; scalar_t__ hci_bus; } ;


 int FUNC_0 (struct id_table const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct id_table const* VAR_4 ;

__attribute__((used)) static const struct id_table *FUNC_1(u16 VAR_5, u16 VAR_6,
          u8 VAR_7, u8 VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if ((VAR_4[VAR_9].match_flags & VAR_3) &&
      (VAR_4[VAR_9].lmp_subver != VAR_5))
   continue;
  if ((VAR_4[VAR_9].match_flags & VAR_1) &&
      (VAR_4[VAR_9].hci_rev != VAR_6))
   continue;
  if ((VAR_4[VAR_9].match_flags & VAR_2) &&
      (VAR_4[VAR_9].hci_ver != VAR_7))
   continue;
  if ((VAR_4[VAR_9].match_flags & VAR_0) &&
      (VAR_4[VAR_9].hci_bus != VAR_8))
   continue;

  break;
 }
 if (VAR_9 >= FUNC_0(VAR_4))
  return ((void*)0);

 return &VAR_4[VAR_9];
}
