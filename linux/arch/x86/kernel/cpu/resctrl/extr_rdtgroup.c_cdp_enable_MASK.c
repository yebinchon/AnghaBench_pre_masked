
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int alloc_enabled; int alloc_capable; } ;


 int VAR_0 ;
 struct rdt_resource* VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 struct rdt_resource *VAR_5 = &VAR_1[VAR_3];
 struct rdt_resource *VAR_6 = &VAR_1[VAR_4];
 struct rdt_resource *VAR_7 = &VAR_1[VAR_2];
 int VAR_8;

 if (!VAR_7->alloc_capable || !VAR_5->alloc_capable ||
     !VAR_6->alloc_capable)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_2, 1);
 if (!VAR_8) {
  VAR_7->alloc_enabled = 0;
  VAR_5->alloc_enabled = 1;
  VAR_6->alloc_enabled = 1;
 }
 return VAR_8;
}
