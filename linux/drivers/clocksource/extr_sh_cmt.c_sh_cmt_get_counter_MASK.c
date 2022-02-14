
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sh_cmt_channel {TYPE_2__* cmt; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {scalar_t__ overflow_bit; } ;


 scalar_t__ FUNC_0 (struct sh_cmt_channel*) ;
 scalar_t__ FUNC_1 (struct sh_cmt_channel*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct sh_cmt_channel *VAR_0, u32 *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_0) & VAR_0->cmt->info->overflow_bit;


 do {
  VAR_6 = VAR_5;
  VAR_2 = FUNC_0(VAR_0);
  VAR_3 = FUNC_0(VAR_0);
  VAR_4 = FUNC_0(VAR_0);
  VAR_5 = FUNC_1(VAR_0) & VAR_0->cmt->info->overflow_bit;
 } while (FUNC_2((VAR_5 != VAR_6) || (VAR_2 > VAR_3 && VAR_2 < VAR_4)
     || (VAR_3 > VAR_4 && VAR_3 < VAR_2) || (VAR_4 > VAR_2 && VAR_4 < VAR_3)));

 *VAR_1 = VAR_5;
 return VAR_3;
}
