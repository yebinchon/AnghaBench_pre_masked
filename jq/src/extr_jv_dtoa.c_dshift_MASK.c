
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
struct TYPE_3__ {int wds; int * x; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (struct dtoa_context*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct dtoa_context* VAR_1, Bigint *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2->x[VAR_2->wds-1]) - 4;
 if (VAR_3 > 0)
  VAR_4 -= VAR_3;
 return VAR_4 & VAR_0;
 }
