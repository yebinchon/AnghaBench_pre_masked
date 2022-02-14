
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvb_coefficients {int c2; int c1; int c0; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, int VAR_1,
      const struct cvb_coefficients *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2->c2 * VAR_0, VAR_1);
 VAR_3 = FUNC_0((VAR_3 + VAR_2->c1) * VAR_0, VAR_1) + VAR_2->c0;
 return VAR_3;
}
