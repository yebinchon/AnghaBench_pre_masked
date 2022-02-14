
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,unsigned int,unsigned int,int ) ;
 int FUNC_2 (scalar_t__,char,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,unsigned int,...) ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;

void
FUNC_6(unsigned VAR_13)
{
 int VAR_14 = VAR_4;

 VAR_13 -= VAR_13 % VAR_12;
 if (VAR_13 > VAR_1) {
  VAR_1 = VAR_13;
  if (!VAR_9 && VAR_11 > VAR_10)
   FUNC_3("truncating to largest ever: 0x%x\n", VAR_13);
 }

 FUNC_1(VAR_0, VAR_13, (unsigned)VAR_4, 0);

 if (VAR_13 > VAR_4)
  FUNC_2(VAR_5 + VAR_4, '\0', VAR_13 - VAR_4);
 VAR_4 = VAR_13;

 if (VAR_11 <= VAR_10)
  return;

 if ((VAR_8 && VAR_11 % VAR_8 == 0) ||
     (VAR_2 && (VAR_7 == -1 || VAR_6 == -1 ||
         VAR_13 <= VAR_6)))
  FUNC_3("%lu trunc\tfrom 0x%x to 0x%x\n", VAR_11, VAR_14, VAR_13);
 if (FUNC_0(VAR_3, (off_t)VAR_13) == -1) {
  FUNC_3("ftruncate1: %x\n", VAR_13);
  FUNC_4("dotruncate: ftruncate");
  FUNC_5(160);
 }
}
