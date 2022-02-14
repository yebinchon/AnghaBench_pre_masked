
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int ks_shortdesc; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 struct malloc_type* VAR_1 ;

int
FUNC_2(struct malloc_type *VAR_2, unsigned long VAR_3)
{

 if (FUNC_0(VAR_3))
  return(1);






 return (FUNC_1(VAR_2->ks_shortdesc, VAR_0) == 0);
}
