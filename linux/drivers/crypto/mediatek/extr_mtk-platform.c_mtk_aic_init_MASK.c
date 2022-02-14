
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct mtk_cryp*,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mtk_cryp *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;


 if (VAR_6 == VAR_4) {
  FUNC_5(0, VAR_5->base + VAR_0);
  FUNC_5(0, VAR_5->base + VAR_2);
  FUNC_5(0, VAR_5->base + VAR_3);
  FUNC_5(0, VAR_5->base + VAR_1);
 } else {
  FUNC_5(0, VAR_5->base + FUNC_0(VAR_6));
  FUNC_5(0, VAR_5->base + FUNC_2(VAR_6));
  FUNC_5(0, VAR_5->base + FUNC_3(VAR_6));
  FUNC_5(0, VAR_5->base + FUNC_1(VAR_6));
 }

 return 0;
}
