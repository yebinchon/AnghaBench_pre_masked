
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ se_err; } ;
union efl_core_int {TYPE_1__ s; void* value; } ;
typedef void* u64 ;
struct nitrox_device {int dummy; } ;


 int FUNC_0 (struct nitrox_device*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int,void*) ;
 void* FUNC_4 (struct nitrox_device*,void*) ;
 int FUNC_5 (struct nitrox_device*,void*,void*) ;

__attribute__((used)) static void FUNC_6(struct nitrox_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  union efl_core_int VAR_3;
  u64 VAR_4, VAR_5;

  VAR_5 = FUNC_1(VAR_2);
  VAR_3.value = FUNC_4(VAR_1, VAR_5);
  FUNC_5(VAR_1, VAR_5, VAR_3.value);
  FUNC_3(FUNC_0(VAR_1), "ELF_CORE(%d)_INT  0x%016llx\n",
        VAR_2, VAR_3.value);
  if (VAR_3.s.se_err) {
   VAR_5 = FUNC_2(VAR_2);
   VAR_4 = FUNC_4(VAR_1, VAR_5);
   FUNC_5(VAR_1, VAR_5, VAR_4);
  }
 }
}
