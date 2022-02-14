
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_cmt_channel {int max_match_value; TYPE_1__* cmt; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_cmt_channel*,int) ;
 int FUNC_1 (struct sh_cmt_channel*,int ) ;

__attribute__((used)) static void FUNC_2(struct sh_cmt_channel *VAR_2, int VAR_3)
{
 FUNC_1(VAR_2, VAR_0);

 if (VAR_3)
  FUNC_0(VAR_2, ((VAR_2->cmt->rate + VAR_1/2) / VAR_1) - 1);
 else
  FUNC_0(VAR_2, VAR_2->max_match_value);
}
