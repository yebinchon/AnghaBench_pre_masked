
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; int buf; } ;
struct ident_filter {scalar_t__ state; TYPE_1__ left; } ;


 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct ident_filter *VAR_0, char **VAR_1, size_t *VAR_2)
{
 size_t VAR_3 = VAR_0->left.len;

 if (*VAR_2 < VAR_3)
  VAR_3 = *VAR_2;
 if (VAR_3) {
  FUNC_0(*VAR_1, VAR_0->left.buf, VAR_3);
  FUNC_1(&VAR_0->left, 0, VAR_3);
  *VAR_1 += VAR_3;
  *VAR_2 -= VAR_3;
 }
 if (!VAR_0->left.len)
  VAR_0->state = 0;
}
