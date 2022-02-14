
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mvebu_mbus_state {TYPE_1__* soc; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int num_wins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvebu_mbus_state*,int,int ,size_t,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct mvebu_mbus_state*,int) ;
 scalar_t__ FUNC_2 (struct mvebu_mbus_state*,int) ;

__attribute__((used)) static int FUNC_3(struct mvebu_mbus_state *VAR_2,
       phys_addr_t VAR_3, size_t VAR_4,
       phys_addr_t VAR_5, u8 VAR_6,
       u8 VAR_7)
{
 int VAR_8;

 if (VAR_5 == VAR_1) {
  for (VAR_8 = 0; VAR_8 < VAR_2->soc->num_wins; VAR_8++) {
   if (FUNC_2(VAR_2, VAR_8))
    continue;

   if (FUNC_1(VAR_2, VAR_8))
    return FUNC_0(VAR_2, VAR_8, VAR_3,
              VAR_4, VAR_5,
              VAR_6, VAR_7);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_2->soc->num_wins; VAR_8++) {

  if ((VAR_5 != VAR_1) &&
      !FUNC_2(VAR_2, VAR_8))
   continue;

  if (FUNC_1(VAR_2, VAR_8))
   return FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4,
             VAR_5, VAR_6, VAR_7);
 }

 return -VAR_0;
}
