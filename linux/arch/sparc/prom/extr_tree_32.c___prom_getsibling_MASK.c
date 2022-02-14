
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int phandle ;
struct TYPE_2__ {int (* no_nextnode ) (int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static phandle FUNC_4(phandle VAR_2)
{
 unsigned long VAR_3;
 phandle VAR_4;

 FUNC_1(&VAR_0, VAR_3);
 VAR_4 = VAR_1->no_nextnode(VAR_2);
 FUNC_0();
 FUNC_2(&VAR_0, VAR_3);

 return VAR_4;
}
