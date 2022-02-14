
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xa_limit {int dummy; } ;
struct siw_mem {int stag; } ;
struct siw_device {int mem_xa; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xa_limit FUNC_0 (int,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct siw_mem*,char*) ;
 scalar_t__ FUNC_3 (int *,int*,struct siw_mem*,struct xa_limit,int*,int ) ;

int FUNC_4(struct siw_device *VAR_2, struct siw_mem *VAR_3)
{
 struct xa_limit VAR_4 = FUNC_0(1, 0x00ffffff);
 u32 VAR_5, VAR_6;

 FUNC_1(&VAR_6, 4);
 VAR_6 &= 0x00ffffff;

 if (FUNC_3(&VAR_2->mem_xa, &VAR_5, VAR_3, VAR_4, &VAR_6,
     VAR_1) < 0)
  return -VAR_0;


 VAR_3->stag = VAR_5 << 8;

 FUNC_2(VAR_3, "new MEM object\n");

 return 0;
}
