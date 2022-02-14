
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lp55xx_chip*) ;
 int FUNC_2 (struct lp55xx_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct lp55xx_chip *VAR_11)
{
 int VAR_12;
 u8 VAR_13 = VAR_2;


 VAR_12 = FUNC_2(VAR_11, VAR_8, VAR_1);
 if (VAR_12)
  return VAR_12;

 FUNC_0();


 if (!FUNC_1(VAR_11))
  VAR_13 |= VAR_0;

 VAR_12 = FUNC_2(VAR_11, VAR_5, VAR_13);
 if (VAR_12)
  return VAR_12;


 FUNC_2(VAR_11, VAR_9, 0);
 FUNC_2(VAR_11, VAR_7, 0);
 FUNC_2(VAR_11, VAR_4, 0);
 FUNC_2(VAR_11, VAR_10, 0);


 FUNC_2(VAR_11, VAR_6, VAR_3);

 return 0;
}
