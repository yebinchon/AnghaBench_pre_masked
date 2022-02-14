
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* uregs; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 size_t FUNC_1 (unsigned long) ;
 size_t FUNC_2 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_7(unsigned long VAR_3, unsigned long VAR_4,
        struct pt_regs *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_4);


 if ((VAR_4 & 0x4b003fe0) == 0x40000120)
  goto swp;

 if (FUNC_0(VAR_4)) {
  unsigned long VAR_7;
  FUNC_3(VAR_7, VAR_3);


  if (VAR_4 & 0x80)
   VAR_7 = (signed long)((signed short)VAR_7);

  VAR_5->uregs[VAR_6] = VAR_7;
 } else
  FUNC_5(VAR_5->uregs[VAR_6], VAR_3);

 return VAR_1;

swp:


 FUNC_4(VAR_5->uregs[FUNC_1(VAR_4)], VAR_3);
 FUNC_6(VAR_5->uregs[FUNC_2(VAR_4)], VAR_3);
 return VAR_2;

fault:
 return VAR_0;
}
