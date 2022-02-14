
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct mvebu_mbus_state {TYPE_1__* soc; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {int num_wins; } ;


 int FUNC_0 (struct mvebu_mbus_state*,int,int*,scalar_t__*,scalar_t__*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct mvebu_mbus_state *VAR_0,
           phys_addr_t VAR_1, size_t VAR_2,
           u8 VAR_3, u8 VAR_4)
{
 u64 VAR_5 = (u64)VAR_1 + VAR_2;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->soc->num_wins; VAR_6++) {
  u64 VAR_7, VAR_8;
  u32 VAR_9;
  u8 VAR_10, VAR_11;
  int VAR_12;

  FUNC_0(VAR_0, VAR_6,
           &VAR_12, &VAR_7, &VAR_9,
           &VAR_10, &VAR_11, ((void*)0));

  if (!VAR_12)
   continue;

  VAR_8 = VAR_7 + VAR_9;





  if ((u64)VAR_1 < VAR_8 && VAR_5 > VAR_7)
   return 0;
 }

 return 1;
}
