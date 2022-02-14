
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct dmar_unit {scalar_t__ ir_enabled; } ;


 int FUNC_0 (int,char*) ;
 struct dmar_unit* FUNC_1 (int,int *) ;
 int FUNC_2 (struct dmar_unit*,int) ;

int
FUNC_3(u_int VAR_0, u_int *VAR_1)
{
 struct dmar_unit *VAR_2;
 u_int VAR_3;

 VAR_3 = *VAR_1;
 if (VAR_3 == -1)
  return (0);
 *VAR_1 = -1;
 VAR_2 = FUNC_1(VAR_0, ((void*)0));
 FUNC_0(VAR_2 != ((void*)0) && VAR_2->ir_enabled,
     ("unmap: cookie %d unit %p", VAR_3, VAR_2));
 return (FUNC_2(VAR_2, VAR_3));
}
