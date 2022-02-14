
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mtk_cryp*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtk_cryp *VAR_11)
{
 int VAR_12;


 FUNC_1(VAR_10, VAR_11->base + VAR_4);
 FUNC_1(0, VAR_11->base + VAR_0);
 FUNC_1(0, VAR_11->base + VAR_1);
 FUNC_1(0, VAR_11->base + VAR_2);
 FUNC_1(0, VAR_11->base + VAR_3);

 FUNC_1(VAR_10, VAR_11->base + VAR_9);
 FUNC_1(0, VAR_11->base + VAR_5);
 FUNC_1(0, VAR_11->base + VAR_6);
 FUNC_1(0, VAR_11->base + VAR_7);
 FUNC_1(0, VAR_11->base + VAR_8);

 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12)
  return VAR_12;

 return 0;
}
