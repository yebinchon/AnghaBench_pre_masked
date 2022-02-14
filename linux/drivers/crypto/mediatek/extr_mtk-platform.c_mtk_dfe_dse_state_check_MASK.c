
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_cryp {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mtk_cryp *VAR_7)
{
 int VAR_8 = -VAR_5;
 u32 VAR_9;


 VAR_9 = FUNC_1(VAR_7->base + VAR_1);
 if (FUNC_0(VAR_9) == VAR_6) {
  VAR_9 = FUNC_1(VAR_7->base + VAR_3);
  if (FUNC_0(VAR_9) == VAR_6)
   VAR_8 = 0;
 }

 if (!VAR_8) {

  FUNC_2(0, VAR_7->base + VAR_0);
  FUNC_2(0, VAR_7->base + VAR_2);
 } else {
  return -VAR_4;
 }

 return 0;
}
