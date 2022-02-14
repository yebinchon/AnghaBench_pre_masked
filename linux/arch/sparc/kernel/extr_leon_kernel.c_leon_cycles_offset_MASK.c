
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* e; } ;
struct TYPE_3__ {int val; int ctrl; int rld; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static u32 FUNC_2(void)
{
 u32 VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_0(&VAR_1->e[VAR_0].rld);
 VAR_3 = FUNC_0(&VAR_1->e[VAR_0].val);
 VAR_4 = FUNC_0(&VAR_1->e[VAR_0].ctrl);
 if (FUNC_1(VAR_4)) {
  VAR_3 = FUNC_0(&VAR_1->e[VAR_0].val);
  VAR_5 = 2 * VAR_2 - VAR_3;
 } else {
  VAR_5 = VAR_2 - VAR_3;
 }

 return VAR_5;
}
