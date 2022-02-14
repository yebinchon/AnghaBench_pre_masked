
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_5__ {TYPE_1__* soc; } ;
struct TYPE_4__ {int num_wins; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int*,scalar_t__*,scalar_t__*,int *,int *,int *) ;

int FUNC_1(phys_addr_t VAR_2, u32 *VAR_3, u8 *VAR_4,
          u8 *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1.soc->num_wins; VAR_6++) {
  u64 VAR_7;
  int VAR_8;

  FUNC_0(&VAR_1, VAR_6, &VAR_8, &VAR_7,
           VAR_3, VAR_4, VAR_5, ((void*)0));

  if (!VAR_8)
   continue;

  if (VAR_7 <= VAR_2 && VAR_2 <= VAR_7 + *VAR_3)
   return VAR_6;
 }

 return -VAR_0;
}
