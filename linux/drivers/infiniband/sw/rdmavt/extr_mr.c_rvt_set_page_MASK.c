
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_6__ {int page_shift; int length; int max_segs; TYPE_2__** map; } ;
struct rvt_mr {TYPE_3__ mr; } ;
struct ib_mr {int dummy; } ;
struct TYPE_5__ {TYPE_1__* segs; } ;
struct TYPE_4__ {int length; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rvt_mr* FUNC_0 (struct ib_mr*) ;
 int FUNC_1 (TYPE_3__*,int,int,void*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ib_mr *VAR_2, u64 VAR_3)
{
 struct rvt_mr *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = 1 << VAR_4->mr.page_shift;
 u32 VAR_6 = VAR_4->mr.length >> VAR_4->mr.page_shift;
 int VAR_7, VAR_8;

 if (FUNC_2(VAR_6 == VAR_4->mr.max_segs))
  return -VAR_0;

 VAR_7 = VAR_6 / VAR_1;
 VAR_8 = VAR_6 % VAR_1;
 VAR_4->mr.map[VAR_7]->segs[VAR_8].vaddr = (void *)VAR_3;
 VAR_4->mr.map[VAR_7]->segs[VAR_8].length = VAR_5;
 VAR_4->mr.length += VAR_5;
 FUNC_1(&VAR_4->mr, VAR_7, VAR_8, (void *)VAR_3, VAR_5);

 return 0;
}
