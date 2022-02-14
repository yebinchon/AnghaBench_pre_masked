
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct cppi41_desc {int dummy; } ;
struct cppi41_dd {int descs_phys; scalar_t__ qmgr_mem; int cd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct device*,unsigned int,int*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct cppi41_dd *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_0(sizeof(struct cppi41_desc) &
   (sizeof(struct cppi41_desc) - 1));
 FUNC_0(sizeof(struct cppi41_desc) < 32);
 FUNC_0(VAR_0 < 32);

 VAR_8 = sizeof(struct cppi41_desc);
 VAR_9 = VAR_0 * VAR_8;

 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {

  VAR_11 = VAR_12 << VAR_5;
  VAR_11 |= (FUNC_5(VAR_8) - 5) << VAR_4;
  VAR_11 |= FUNC_5(VAR_0) - 5;

  FUNC_0(VAR_1 != 1);
  VAR_7->cd = FUNC_4(VAR_6, VAR_9,
    &VAR_7->descs_phys, VAR_3);
  if (!VAR_7->cd)
   return -VAR_2;

  FUNC_3(VAR_7->descs_phys, VAR_7->qmgr_mem + FUNC_1(VAR_10));
  FUNC_3(VAR_11, VAR_7->qmgr_mem + FUNC_2(VAR_10));

  VAR_12 += VAR_0;
 }
 return 0;
}
