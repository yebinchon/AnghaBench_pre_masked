
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int u16len; int u16tou8; } ;
typedef TYPE_1__ uiAttributedString ;


 int FUNC_0 (size_t*,int ,size_t) ;
 scalar_t__ FUNC_1 (size_t,char*) ;

size_t *FUNC_2(const uiAttributedString *VAR_0, size_t *VAR_1)
{
 size_t *VAR_2;
 size_t VAR_3;

 VAR_3 = (VAR_0->u16len + 1) * sizeof (size_t);
 *VAR_1 = VAR_0->u16len;
 VAR_2 = (size_t *) FUNC_1(VAR_3, "size_t[] (uiAttributedString)");
 FUNC_0(VAR_2, VAR_0->u16tou8, VAR_3);
 return VAR_2;
}
