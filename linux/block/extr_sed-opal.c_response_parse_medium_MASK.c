
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_resp_tok {int const* pos; int len; int type; int width; } ;
typedef int ssize_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static ssize_t FUNC_0(struct opal_resp_tok *VAR_7,
         const u8 *VAR_8)
{
 VAR_7->pos = VAR_8;
 VAR_7->len = (((VAR_8[0] & VAR_1) << 8) | VAR_8[1]) + 2;
 VAR_7->width = VAR_6;

 if (VAR_8[0] & VAR_0)
  VAR_7->type = VAR_3;
 else if (VAR_8[0] & VAR_2)
  VAR_7->type = VAR_4;
 else
  VAR_7->type = VAR_5;

 return VAR_7->len;
}
