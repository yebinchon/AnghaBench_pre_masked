
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int res_name; } ;
struct resource {unsigned long start; unsigned long end; unsigned long flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,struct resource*) ;

__attribute__((used)) static struct resource *FUNC_3(struct zpci_dev *VAR_2, unsigned long VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 struct resource *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->start = VAR_3;
 VAR_6->end = VAR_6->start + VAR_4 - 1;
 VAR_6->flags = VAR_5;
 VAR_6->name = VAR_2->res_name;

 if (FUNC_2(&VAR_1, VAR_6)) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
