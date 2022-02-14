
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_conf {scalar_t__ pc_class; scalar_t__ pc_subclass; } ;
struct TYPE_2__ {char const* desc; scalar_t__ class; scalar_t__ subclass; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(struct pci_conf *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].desc != ((void*)0); VAR_2++) {
  if ((VAR_0[VAR_2].class == VAR_1->pc_class) &&
      (VAR_0[VAR_2].subclass == VAR_1->pc_subclass))
   return(VAR_0[VAR_2].desc);
 }
 return(((void*)0));
}
