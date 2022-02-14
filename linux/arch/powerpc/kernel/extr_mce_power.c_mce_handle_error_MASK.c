
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_regs {int nip; int msr; } ;
struct mce_ierror_table {int dummy; } ;
struct mce_error_info {scalar_t__ error_type; int member_0; } ;
struct mce_derror_table {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 long FUNC_1 (struct pt_regs*,struct mce_derror_table const*,struct mce_error_info*,int *,int *) ;
 long FUNC_2 (struct pt_regs*,struct mce_ierror_table const*,struct mce_error_info*,int *,int *) ;
 long FUNC_3 (struct pt_regs*,struct mce_error_info*) ;
 int FUNC_4 (struct pt_regs*,long,struct mce_error_info*,int ,int ,int ) ;

__attribute__((used)) static long FUNC_5(struct pt_regs *VAR_2,
  const struct mce_derror_table VAR_3[],
  const struct mce_ierror_table VAR_4[])
{
 struct mce_error_info VAR_5 = { 0 };
 uint64_t VAR_6, VAR_7 = VAR_1;
 uint64_t VAR_8 = VAR_2->msr;
 long VAR_9;

 if (FUNC_0(VAR_8))
  VAR_9 = FUNC_1(VAR_2, VAR_3, &VAR_5, &VAR_6,
    &VAR_7);
 else
  VAR_9 = FUNC_2(VAR_2, VAR_4, &VAR_5, &VAR_6,
    &VAR_7);

 if (!VAR_9 && VAR_5.error_type == VAR_0)
  VAR_9 = FUNC_3(VAR_2, &VAR_5);

 FUNC_4(VAR_2, VAR_9, &VAR_5, VAR_2->nip, VAR_6, VAR_7);

 return VAR_9;
}
