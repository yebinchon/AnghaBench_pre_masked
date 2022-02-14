
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int lock; int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fimc_context*,int) ;
 int FUNC_2 (struct fimc_context*,int ) ;
 int FUNC_3 (struct fimc_context*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct fimc_context *VAR_3, u32 VAR_4,
  bool VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_3->dev, "buf_id[%d]enqueu[%d]\n", VAR_4, VAR_5);

 FUNC_5(&VAR_3->lock, VAR_6);

 VAR_8 = FUNC_2(VAR_3, VAR_0);

 if (VAR_5)
  VAR_8 |= (1 << VAR_4);
 else
  VAR_8 &= ~(1 << VAR_4);

 FUNC_3(VAR_3, VAR_8, VAR_0);

 VAR_7 = FUNC_4(VAR_8);

 if (VAR_5 && VAR_7 >= VAR_1)
  FUNC_1(VAR_3, 1);
 else if (!VAR_5 && VAR_7 <= VAR_2)
  FUNC_1(VAR_3, 0);

 FUNC_6(&VAR_3->lock, VAR_6);
}
