
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_hsdma_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mtk_hsdma_device *VAR_4)
{
 u32 VAR_5 = 0;

 return FUNC_0(VAR_4->base + VAR_0, VAR_5,
      !(VAR_5 & VAR_1),
      VAR_3,
      VAR_2);
}
