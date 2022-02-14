
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__* s; } ;
typedef TYPE_1__ uiAttributedString ;



__attribute__((used)) static int FUNC_0(uiAttributedString *VAR_0, size_t VAR_1)
{
 uint8_t VAR_2;


 if (VAR_0->s == ((void*)0) && VAR_1 == 0)
  return 1;
 VAR_2 = (uint8_t) (VAR_0->s[VAR_1]);
 return VAR_2 < 0x80 || VAR_2 >= 0xC0;
}
