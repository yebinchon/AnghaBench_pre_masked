
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_mr {int dummy; } ;
struct TYPE_2__ {scalar_t__ pbl_size; } ;
struct c4iw_mr {scalar_t__ mpl_len; int * mpl; TYPE_1__ attr; } ;


 int VAR_0 ;
 struct c4iw_mr* FUNC_0 (struct ib_mr*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ib_mr *VAR_1, u64 VAR_2)
{
 struct c4iw_mr *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_3->mpl_len == VAR_3->attr.pbl_size))
  return -VAR_0;

 VAR_3->mpl[VAR_3->mpl_len++] = VAR_2;

 return 0;
}
