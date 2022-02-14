
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int finished; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(u32 VAR_1, u64 VAR_2)
{
 if (FUNC_0(VAR_0.finished)) {
  int VAR_3 = FUNC_1(VAR_1);

  if (VAR_3 >= 0)
   *(u64 *)((char *)FUNC_2(&VAR_0) + VAR_3) = VAR_2;
  return;
 }
 FUNC_3(VAR_1, VAR_2);
}
