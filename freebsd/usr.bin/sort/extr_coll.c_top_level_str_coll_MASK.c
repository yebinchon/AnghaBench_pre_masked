
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwstring {int dummy; } ;
struct TYPE_2__ {scalar_t__ rflag; } ;


 int FUNC_0 (struct bwstring const*,struct bwstring const*,int ) ;
 TYPE_1__* VAR_0 ;

int
FUNC_1(const struct bwstring *VAR_1, const struct bwstring *VAR_2)
{

 if (VAR_0->rflag) {
  const struct bwstring *VAR_3;

  VAR_3 = VAR_1;
  VAR_1 = VAR_2;
  VAR_2 = VAR_3;
 }

 return (FUNC_0(VAR_1, VAR_2, 0));
}
