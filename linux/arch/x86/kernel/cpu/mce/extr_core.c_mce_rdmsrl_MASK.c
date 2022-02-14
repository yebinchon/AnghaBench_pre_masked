
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {int finished; } ;


 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static u64 FUNC_5(u32 VAR_1)
{
 u64 VAR_2;

 if (FUNC_1(VAR_0.finished)) {
  int VAR_3 = FUNC_2(VAR_1);

  if (VAR_3 < 0)
   return 0;
  return *(u64 *)((char *)FUNC_4(&VAR_0) + VAR_3);
 }

 if (FUNC_3(VAR_1, &VAR_2)) {
  FUNC_0(1, "mce: Unable to read MSR 0x%x!\n", VAR_1);





  VAR_2 = 0;
 }

 return VAR_2;
}
