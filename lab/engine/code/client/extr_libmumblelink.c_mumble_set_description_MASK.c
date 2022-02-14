
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int description; } ;


 size_t FUNC_0 (int,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,char const*,size_t) ;
 scalar_t__ FUNC_2 (char const*) ;

void FUNC_3(const char* VAR_1)
{
 size_t VAR_2;
 if (!VAR_0)
  return;
 VAR_2 = FUNC_0(sizeof(VAR_0->description)/sizeof(wchar_t), FUNC_2(VAR_1)+1);
 FUNC_1(VAR_0->description, VAR_1, VAR_2);
}
