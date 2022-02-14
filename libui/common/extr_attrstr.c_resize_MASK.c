
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint16_t ;
struct TYPE_3__ {size_t len; char* s; size_t* u8tou16; size_t u16len; char* u16; size_t* u16tou8; } ;
typedef TYPE_1__ uiAttributedString ;


 scalar_t__ FUNC_0 (char*,int,char*) ;

__attribute__((used)) static void FUNC_1(uiAttributedString *VAR_0, size_t VAR_1, size_t VAR_2)
{
 VAR_0->len = VAR_1;
 VAR_0->s = (char *) FUNC_0(VAR_0->s, (VAR_0->len + 1) * sizeof (char), "char[] (uiAttributedString)");
 VAR_0->u8tou16 = (size_t *) FUNC_0(VAR_0->u8tou16, (VAR_0->len + 1) * sizeof (size_t), "size_t[] (uiAttributedString)");
 VAR_0->u16len = VAR_2;
 VAR_0->u16 = (uint16_t *) FUNC_0(VAR_0->u16, (VAR_0->u16len + 1) * sizeof (uint16_t), "uint16_t[] (uiAttributedString)");
 VAR_0->u16tou8 = (size_t *) FUNC_0(VAR_0->u16tou8, (VAR_0->u16len + 1) * sizeof (size_t), "size_t[] (uiAttributedString)");
}
