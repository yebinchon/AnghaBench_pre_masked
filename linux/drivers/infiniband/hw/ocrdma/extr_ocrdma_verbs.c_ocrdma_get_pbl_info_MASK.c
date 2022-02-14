
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int num_pbes; int num_pbls; int pbl_size; } ;
struct ocrdma_mr {TYPE_2__ hwmr; } ;
struct TYPE_3__ {int max_num_mr_pbl; } ;
struct ocrdma_dev {TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct ocrdma_dev *VAR_3, struct ocrdma_mr *VAR_4,
         u32 VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8 = 0;
 u32 VAR_9;

 do {
  VAR_9 = VAR_2 * (1 << VAR_7);
  if (VAR_9 > VAR_1) {
   VAR_8 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_0(VAR_5, (VAR_9 / sizeof(u64)));
  VAR_6 = VAR_6 / (VAR_9 / sizeof(u64));
  VAR_7++;
 } while (VAR_6 >= VAR_3->attr.max_num_mr_pbl);

 VAR_4->hwmr.num_pbes = VAR_5;
 VAR_4->hwmr.num_pbls = VAR_6;
 VAR_4->hwmr.pbl_size = VAR_9;
 return VAR_8;
}
