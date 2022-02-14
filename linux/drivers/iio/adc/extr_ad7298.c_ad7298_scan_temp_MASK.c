
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ad7298_state {int ext_ref; int spi; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct ad7298_state *VAR_3, int *VAR_4)
{
 int VAR_5;
 __be16 VAR_6;

 VAR_6 = FUNC_1(VAR_2 | VAR_1 |
     VAR_0 | VAR_3->ext_ref);

 VAR_5 = FUNC_4(VAR_3->spi, (u8 *)&VAR_6, 2);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_1(0);

 VAR_5 = FUNC_4(VAR_3->spi, (u8 *)&VAR_6, 2);
 if (VAR_5)
  return VAR_5;

 FUNC_5(101, 1000);

 VAR_5 = FUNC_3(VAR_3->spi, (u8 *)&VAR_6, 2);
 if (VAR_5)
  return VAR_5;

 *VAR_4 = FUNC_2(FUNC_0(VAR_6), 11);

 return 0;
}
