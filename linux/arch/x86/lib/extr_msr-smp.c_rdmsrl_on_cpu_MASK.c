
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int q; } ;
struct msr_info {TYPE_1__ reg; int msr_no; } ;
typedef int rv ;


 int VAR_0 ;
 int FUNC_0 (struct msr_info*,int ,int) ;
 int FUNC_1 (unsigned int,int ,struct msr_info*,int) ;

int FUNC_2(unsigned int VAR_1, u32 VAR_2, u64 *VAR_3)
{
 int VAR_4;
 struct msr_info VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.msr_no = VAR_2;
 VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_5, 1);
 *VAR_3 = VAR_5.reg.q;

 return VAR_4;
}
