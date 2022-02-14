
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int u; } ;
struct opal_resp_tok {int const* pos; int len; TYPE_1__ stored; int type; int width; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct opal_resp_tok *VAR_8,
        const u8 *VAR_9)
{
 VAR_8->pos = VAR_9;
 VAR_8->len = (VAR_9[0] & VAR_6) + 1;
 VAR_8->width = VAR_4;

 if (VAR_9[0] & VAR_5) {
  VAR_8->type = VAR_1;
 } else if (VAR_9[0] & VAR_7) {
  VAR_8->type = VAR_2;
 } else {
  u64 VAR_10 = 0;
  ssize_t VAR_11, VAR_12 = 0;

  VAR_8->type = VAR_3;
  if (VAR_8->len > 9) {
   FUNC_0("uint64 with more than 8 bytes\n");
   return -VAR_0;
  }
  for (VAR_11 = VAR_8->len - 1; VAR_11 > 0; VAR_11--) {
   VAR_10 |= ((u64)VAR_9[VAR_11] << (8 * VAR_12));
   VAR_12++;
  }
  VAR_8->stored.u = VAR_10;
 }

 return VAR_8->len;
}
