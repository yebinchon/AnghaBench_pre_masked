
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int xfrblock_buf_len; char* xfrblock_buf_val; } ;
struct TYPE_7__ {int xfrstat; TYPE_1__ xfrblock_buf; } ;
struct TYPE_8__ {scalar_t__ ok; TYPE_2__ xfr_u; } ;
typedef TYPE_3__ xfr ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned char**,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static bool_t
FUNC_4(register XDR *VAR_7, xfr *VAR_8)
{
 unsigned char VAR_9[VAR_2];

 while (1) {
  if ((VAR_8->xfr_u.xfrblock_buf.xfrblock_buf_len =
      FUNC_0(VAR_6, &VAR_9, VAR_2)) != -1) {
   VAR_8->ok = VAR_1;
   VAR_8->xfr_u.xfrblock_buf.xfrblock_buf_val = (char *)&VAR_9;
  } else {
   VAR_8->ok = VAR_0;
   VAR_8->xfr_u.xfrstat = VAR_4;
   FUNC_3("read error: %s", FUNC_1(VAR_5));
  }


  if (!FUNC_2(VAR_7, VAR_8))
   return(VAR_0);
  if (VAR_8->ok == VAR_0)
   return(VAR_1);
  if (VAR_8->xfr_u.xfrblock_buf.xfrblock_buf_len < VAR_2) {
   VAR_8->ok = VAR_0;
   VAR_8->xfr_u.xfrstat = VAR_3;
   if (!FUNC_2(VAR_7, VAR_8))
    return(VAR_0);
   return(VAR_1);
  }
 }
}
