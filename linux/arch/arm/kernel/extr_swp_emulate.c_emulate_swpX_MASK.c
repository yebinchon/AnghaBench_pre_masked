
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned long) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned long) ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_6, unsigned int *VAR_7,
   unsigned int VAR_8)
{
 unsigned int VAR_9 = 0;

 if ((VAR_8 != VAR_2) && (VAR_6 & 0x3)) {

  FUNC_4("SWP instruction on unaligned pointer!\n");
  return -VAR_1;
 }

 while (1) {
  unsigned long VAR_10;
  unsigned int VAR_11;

  VAR_11 = FUNC_7();
  if (VAR_8 == VAR_2)
   FUNC_1(*VAR_7, VAR_6, VAR_9, VAR_10);
  else
   FUNC_0(*VAR_7, VAR_6, VAR_9, VAR_10);
  FUNC_6(VAR_11);

  if (FUNC_3(VAR_9 != -VAR_0) || FUNC_5(VAR_3))
   break;

  FUNC_2();
 }

 if (VAR_9 == 0) {
  if (VAR_8 == VAR_2)
   VAR_4++;
  else
   VAR_5++;
 }

 return VAR_9;
}
