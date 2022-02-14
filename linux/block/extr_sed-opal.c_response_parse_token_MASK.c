
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_resp_tok {int len; int width; int type; int const* pos; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_0(struct opal_resp_tok *VAR_2,
        const u8 *VAR_3)
{
 VAR_2->pos = VAR_3;
 VAR_2->len = 1;
 VAR_2->type = VAR_0;
 VAR_2->width = VAR_1;

 return VAR_2->len;
}
