
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sch_gpio {scalar_t__ iobase; } ;


 int FUNC_0 (unsigned short) ;
 int FUNC_1 (scalar_t__) ;
 unsigned short FUNC_2 (struct sch_gpio*,unsigned int) ;
 unsigned short FUNC_3 (struct sch_gpio*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sch_gpio *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned short VAR_3, VAR_4;
 u8 VAR_5;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 VAR_4 = FUNC_2(VAR_0, VAR_1);

 VAR_5 = !!(FUNC_1(VAR_0->iobase + VAR_3) & FUNC_0(VAR_4));

 return VAR_5;
}
