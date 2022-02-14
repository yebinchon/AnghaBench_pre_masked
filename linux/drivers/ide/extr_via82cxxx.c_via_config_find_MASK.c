
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_isa_bridge {scalar_t__ id; int flags; scalar_t__ rev_min; scalar_t__ rev_max; } ;
struct pci_dev {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (scalar_t__,scalar_t__,int *) ;
 struct via_isa_bridge* VAR_3 ;

__attribute__((used)) static struct via_isa_bridge *FUNC_2(struct pci_dev **VAR_4)
{
 struct via_isa_bridge *VAR_5;

 for (VAR_5 = VAR_3;
      VAR_5->id != VAR_0; VAR_5++)
  if ((*VAR_4 = FUNC_1(VAR_1 +
   !!(VAR_5->flags & VAR_2),
   VAR_5->id, ((void*)0)))) {

   if ((*VAR_4)->revision >= VAR_5->rev_min &&
       (*VAR_4)->revision <= VAR_5->rev_max)
    break;
   FUNC_0(*VAR_4);
  }

 return VAR_5;
}
