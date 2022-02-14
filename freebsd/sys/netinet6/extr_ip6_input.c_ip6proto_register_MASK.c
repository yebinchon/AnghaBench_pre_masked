
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct protosw {short pr_protocol; TYPE_1__* pr_domain; } ;
struct TYPE_4__ {struct protosw* dom_protoswNPROTOSW; struct protosw* dom_protosw; } ;
struct TYPE_3__ {scalar_t__ dom_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 struct protosw* VAR_8 ;
 int* VAR_9 ;
 struct protosw* FUNC_0 (scalar_t__,int ,int ) ;

int
FUNC_1(short VAR_10)
{
 struct protosw *VAR_11;


 if (VAR_10 <= 0 || VAR_10 >= VAR_3)
  return (VAR_2);





 VAR_11 = FUNC_0(VAR_5, VAR_4, VAR_6);
 if (VAR_11 == ((void*)0))
  return (VAR_1);
 if (VAR_9[VAR_10] != VAR_11 - VAR_8)
  return (VAR_0);




 for (VAR_11 = VAR_7.dom_protosw;
     VAR_11 < VAR_7.dom_protoswNPROTOSW; VAR_11++) {
  if (VAR_11->pr_domain->dom_family == VAR_5 &&
      VAR_11->pr_protocol && VAR_11->pr_protocol == VAR_10) {
   VAR_9[VAR_11->pr_protocol] = VAR_11 - VAR_8;
   return (0);
  }
 }
 return (VAR_2);
}
