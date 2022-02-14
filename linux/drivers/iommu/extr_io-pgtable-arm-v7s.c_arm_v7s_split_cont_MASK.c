
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable {int cfg; } ;
struct arm_v7s_io_pgtable {struct io_pgtable iop; } ;
typedef scalar_t__ arm_v7s_iopte ;


 size_t FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct io_pgtable*,unsigned long,size_t,size_t) ;

__attribute__((used)) static arm_v7s_iopte FUNC_5(struct arm_v7s_io_pgtable *VAR_1,
     unsigned long VAR_2, int VAR_3, int VAR_4,
     arm_v7s_iopte *VAR_5)
{
 struct io_pgtable *VAR_6 = &VAR_1->iop;
 arm_v7s_iopte VAR_7;
 size_t VAR_8 = FUNC_0(VAR_4);
 int VAR_9;


 VAR_7 = *VAR_5;
 if (!FUNC_3(VAR_7, VAR_4))
  return VAR_7;

 VAR_5 -= VAR_3 & (VAR_0 - 1);
 VAR_7 = FUNC_2(VAR_7, VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_5[VAR_9] = VAR_7 + VAR_9 * VAR_8;

 FUNC_1(VAR_5, VAR_0, &VAR_6->cfg);

 VAR_8 *= VAR_0;
 FUNC_4(VAR_6, VAR_2, VAR_8, VAR_8);
 return VAR_7;
}
