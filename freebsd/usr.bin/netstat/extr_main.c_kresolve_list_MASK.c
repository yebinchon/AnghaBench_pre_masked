
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlist {scalar_t__ n_type; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct nlist*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,int ,...) ;

__attribute__((used)) static int
FUNC_4(struct nlist *VAR_2)
{

 if ((VAR_0 == ((void*)0)) && (FUNC_2() != 0))
  return (-1);

 if (VAR_2[0].n_type != 0)
  return (0);

 if (FUNC_1(VAR_0, VAR_2) < 0) {
  if (VAR_1)
   FUNC_3(1, "%s: kvm_nlist: %s", VAR_1,
       FUNC_0(VAR_0));
  else
   FUNC_3(1, "kvm_nlist: %s", FUNC_0(VAR_0));
 }

 return (0);
}
