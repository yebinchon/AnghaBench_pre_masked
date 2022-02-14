
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hi8435_priv {int spi; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hi8435_priv *VAR_1, u8 VAR_2, u16 *VAR_3)
{
 int VAR_4;
 __be16 VAR_5;

 VAR_2 |= VAR_0;
 VAR_4 = FUNC_1(VAR_1->spi, &VAR_2, 1, &VAR_5, 2);
 *VAR_3 = FUNC_0(VAR_5);

 return VAR_4;
}
