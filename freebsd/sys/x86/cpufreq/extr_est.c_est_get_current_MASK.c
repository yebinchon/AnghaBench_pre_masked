
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ id16; } ;
typedef TYPE_1__ freq_info ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static freq_info *
FUNC_2(freq_info *VAR_0, size_t VAR_1)
{
 freq_info *VAR_2;
 int VAR_3;
 uint16_t VAR_4;






 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_1(&VAR_4);
  for (VAR_2 = VAR_0; VAR_2 < VAR_0 + VAR_1; VAR_2++) {
   if (VAR_2->id16 == VAR_4)
    return (VAR_2);
  }
  FUNC_0(100);
 }
 return (((void*)0));
}
