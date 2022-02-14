
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2if {int io; int base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct ps2if *VAR_4 = VAR_3;
 unsigned int VAR_5;
 irqreturn_t VAR_6 = VAR_1;

 while ((VAR_5 = FUNC_0(VAR_4->base)) & 0xffff0000) {
  FUNC_1(VAR_4->io, VAR_5 & 0xff, 0);
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
