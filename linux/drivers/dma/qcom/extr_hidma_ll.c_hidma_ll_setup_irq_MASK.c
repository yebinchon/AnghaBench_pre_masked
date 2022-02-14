
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hidma_lldev {int msi_support; scalar_t__ evca; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct hidma_lldev *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 VAR_4->msi_support = VAR_5;


 FUNC_1(0, VAR_4->evca + VAR_2);
 FUNC_1(0, VAR_4->evca + VAR_3);


 VAR_6 = FUNC_0(VAR_4->evca + VAR_1);
 VAR_6 &= ~0xF;
 if (!VAR_4->msi_support)
  VAR_6 = VAR_6 | 0x1;
 FUNC_1(VAR_6, VAR_4->evca + VAR_1);


 FUNC_1(VAR_0, VAR_4->evca + VAR_2);
 FUNC_1(VAR_0, VAR_4->evca + VAR_3);
}
