
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_node {TYPE_1__* collections; } ;
struct TYPE_2__ {unsigned long long target_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct its_node *VAR_3)
{
 int VAR_4;

 VAR_3->collections = FUNC_0(VAR_2, sizeof(*VAR_3->collections),
       VAR_1);
 if (!VAR_3->collections)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->collections[VAR_4].target_address = ~0ULL;

 return 0;
}
