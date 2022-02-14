
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int alloc_enabled; int alloc_capable; } ;


 struct rdt_resource* VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 struct rdt_resource *VAR_4 = &VAR_0[VAR_1];

 VAR_4->alloc_enabled = VAR_4->alloc_capable;

 if (VAR_0[VAR_2].alloc_enabled) {
  VAR_0[VAR_2].alloc_enabled = 0;
  VAR_0[VAR_3].alloc_enabled = 0;
  FUNC_0(VAR_1, 0);
 }
}
