
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_mem {scalar_t__ family; } ;
struct nd_cmd_pkg {scalar_t__ nd_family; int nd_command; scalar_t__* nd_reserved2; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct nfit_mem *VAR_3, unsigned int VAR_4,
  struct nd_cmd_pkg *VAR_5)
{
 if (VAR_5) {
  int VAR_6;

  if (VAR_3 && VAR_3->family != VAR_5->nd_family)
   return -VAR_1;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->nd_reserved2); VAR_6++)
   if (VAR_5->nd_reserved2[VAR_6])
    return -VAR_0;
  return VAR_5->nd_command;
 }


 if (!VAR_3)
  return VAR_4;


 if (VAR_3->family == VAR_2)
  return VAR_4;





 return 0;
}
