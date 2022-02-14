
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_drvdata {int dev; scalar_t__ pc_has_offset; scalar_t__ edpcsr; } ;


 unsigned long FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static unsigned long FUNC_2(struct debug_drvdata *VAR_3)
{
 unsigned long VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6;

 VAR_6 = (unsigned long)VAR_3->edpcsr;

 if (VAR_3->pc_has_offset) {
  VAR_4 = 8;
  VAR_5 = 4;
 }


 if (VAR_6 & VAR_1) {
  VAR_6 = (VAR_6 & VAR_2) - VAR_5;
  return VAR_6;
 }







 if (VAR_6 & FUNC_0(1))
  FUNC_1(VAR_3->dev,
     "Instruction offset is implementation defined\n");
 else
  VAR_6 = (VAR_6 & VAR_0) - VAR_4;

 return VAR_6;
}
