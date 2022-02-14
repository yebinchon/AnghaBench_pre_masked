
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int u; } ;
struct opal_resp_tok {int const* pos; int len; TYPE_1__ stored; int type; int width; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;

__attribute__((used)) static ssize_t FUNC_0(struct opal_resp_tok *VAR_4,
       const u8 *VAR_5)
{
 VAR_4->pos = VAR_5;
 VAR_4->len = 1;
 VAR_4->width = VAR_2;

 if (VAR_5[0] & VAR_3) {
  VAR_4->type = VAR_0;
 } else {
  VAR_4->type = VAR_1;
  VAR_4->stored.u = VAR_5[0] & 0x3f;
 }

 return VAR_4->len;
}
