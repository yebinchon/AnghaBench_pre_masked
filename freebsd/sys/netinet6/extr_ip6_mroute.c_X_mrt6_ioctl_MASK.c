
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct sioc_sg_req6 {int dummy; } ;
struct sioc_mif_req6 {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;


 int FUNC_0 (struct sioc_mif_req6*) ;
 int FUNC_1 (struct sioc_sg_req6*) ;

int
FUNC_2(u_long VAR_1, caddr_t VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0;

 switch (VAR_1) {
 case 128:
  VAR_3 = FUNC_1((struct sioc_sg_req6 *)VAR_2);
  break;

 case 129:
  VAR_3 = FUNC_0((struct sioc_mif_req6 *)VAR_2);
  break;

 default:
  break;
 }

 return (VAR_3);
}
