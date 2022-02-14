
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct mvebu_mbus_state {TYPE_1__* soc; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {int num_wins; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvebu_mbus_state*,int,int*,scalar_t__*,size_t*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct mvebu_mbus_state *VAR_1,
      phys_addr_t VAR_2, size_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->soc->num_wins; VAR_4++) {
  u64 VAR_5;
  u32 VAR_6;
  int VAR_7;

  FUNC_0(VAR_1, VAR_4,
           &VAR_7, &VAR_5, &VAR_6,
           ((void*)0), ((void*)0), ((void*)0));

  if (!VAR_7)
   continue;

  if (VAR_2 == VAR_5 && VAR_3 == VAR_6)
   return VAR_4;
 }

 return -VAR_0;
}
