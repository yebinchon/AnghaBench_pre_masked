
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tp_entry {scalar_t__ sysindex; int tp_addr; } ;
struct bridge_if {scalar_t__ sysindex; struct tp_entry* f_tpa; } ;


 struct tp_entry* FUNC_0 (struct tp_entry*,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_0 ;

struct tp_entry *
FUNC_2(uint8_t *VAR_1, struct bridge_if *VAR_2)
{
 struct tp_entry *VAR_3;

 for (VAR_3 = VAR_2->f_tpa; VAR_3 != ((void*)0); VAR_3 = FUNC_0(VAR_3, VAR_0)) {
  if (VAR_3->sysindex != VAR_2->sysindex) {
   VAR_3 = ((void*)0);
   break;
  }

  if (FUNC_1(VAR_3->tp_addr, VAR_1) == 0)
   break;
 }

 return (VAR_3);
}
