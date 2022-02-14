
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irq_hw_number_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline unsigned int FUNC_0(irq_hw_number_t VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_4 -= VAR_3;
 VAR_5 = VAR_4 / VAR_0 + 1;
 VAR_6 = VAR_4 % VAR_0;

 return VAR_6 * 4 + VAR_5 * VAR_1
   + VAR_2;
}
