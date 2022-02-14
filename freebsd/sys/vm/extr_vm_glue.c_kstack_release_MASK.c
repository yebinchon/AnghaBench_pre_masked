
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_2__ {int object; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, void **VAR_2, int VAR_3)
{
 vm_offset_t VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = (vm_offset_t)VAR_2[VAR_5];
  FUNC_2(
      FUNC_0(FUNC_1(VAR_4))->object,
      VAR_4, VAR_0);
 }
}
