
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_resp_tok {int const* pos; int len; int type; int width; } ;
typedef int ssize_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_0(struct opal_resp_tok *VAR_6,
       const u8 *VAR_7)
{
 VAR_6->pos = VAR_7;
 VAR_6->len = ((VAR_7[1] << 16) | (VAR_7[2] << 8) | VAR_7[3]) + 4;
 VAR_6->width = VAR_5;

 if (VAR_7[0] & VAR_0)
  VAR_6->type = VAR_2;
 else if (VAR_7[0] & VAR_1)
  VAR_6->type = VAR_3;
 else
  VAR_6->type = VAR_4;

 return VAR_6->len;
}
