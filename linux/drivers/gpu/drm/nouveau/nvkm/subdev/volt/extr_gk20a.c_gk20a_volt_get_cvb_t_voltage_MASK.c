
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvb_coef {int c3; int c4; int c5; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,struct cvb_coef const*) ;

__attribute__((used)) static inline int
FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3,
        const struct cvb_coef *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_4);

 VAR_6 = FUNC_0(VAR_4->c3 * VAR_0, VAR_2) + VAR_4->c4 +
  FUNC_0(VAR_4->c5 * VAR_1, VAR_3);
 VAR_6 = FUNC_0(VAR_6 * VAR_1, VAR_3) + VAR_5;
 return VAR_6;
}
