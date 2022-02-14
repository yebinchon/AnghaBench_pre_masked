
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pmf_args {int count; TYPE_1__* u; } ;
struct TYPE_2__ {scalar_t__* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct pmf_args*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct pmf_args VAR_3;
 u32 VAR_4 = 0;

 VAR_3.count = 1;
 VAR_3.u[0].p = &VAR_4;
 FUNC_0(VAR_2, &VAR_3);
 return VAR_4 ? VAR_0 : VAR_1;
}
