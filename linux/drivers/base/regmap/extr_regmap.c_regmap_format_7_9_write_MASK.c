
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int * work_buf; } ;
typedef int __be16 ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct regmap *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 __be16 *VAR_3 = VAR_0->work_buf;
 *VAR_3 = FUNC_0((VAR_1 << 9) | VAR_2);
}
