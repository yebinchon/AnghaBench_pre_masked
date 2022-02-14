
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,char,unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char*) ;
 unsigned int FUNC_8 (int ,scalar_t__,unsigned int) ;
 unsigned int VAR_15 ;

void
FUNC_9(unsigned VAR_16, unsigned VAR_17)
{
 off_t VAR_18;
 unsigned VAR_19;

 VAR_16 -= VAR_16 % VAR_15;
 if (VAR_17 == 0) {
  if (!VAR_12 && VAR_14 > VAR_13)
   FUNC_4("skipping zero size write\n");
  FUNC_1(VAR_0, VAR_1, VAR_16, VAR_17);
  return;
 }

 FUNC_1(VAR_1, VAR_16, VAR_17, VAR_5);

 FUNC_0(VAR_10, VAR_6, VAR_16, VAR_17);
 if (VAR_5 < VAR_16 + VAR_17) {
  if (VAR_5 < VAR_16)
   FUNC_3(VAR_6 + VAR_5, '\0', VAR_16 - VAR_5);
  VAR_5 = VAR_16 + VAR_17;
  if (VAR_7) {
   FUNC_7("Lite file size bug in fsx!");
   FUNC_6(149);
  }
 }

 if (VAR_14 <= VAR_13)
  return;

 if (!VAR_12 && ((VAR_11 &&
   VAR_14 % VAR_11 == 0) ||
         (VAR_3 &&
   (VAR_9 == -1 ||
    (VAR_16 + VAR_17 > VAR_9 &&
     (VAR_8 == -1 || VAR_16 <= VAR_8))))))
  FUNC_4("%lu write\t0x%x thru\t0x%x\t(0x%x bytes)\n", VAR_14,
      VAR_16, VAR_16 + VAR_17 - 1, VAR_17);
 VAR_18 = FUNC_2(VAR_4, (off_t)VAR_16, VAR_2);
 if (VAR_18 == (off_t)-1) {
  FUNC_5("dowrite: lseek");
  FUNC_6(150);
 }
 VAR_19 = FUNC_8(VAR_4, VAR_6 + VAR_16, VAR_17);
 if (VAR_19 != VAR_17) {
  if (VAR_19 == -1)
   FUNC_5("dowrite: write");
  else
   FUNC_4("short write: 0x%x bytes instead of 0x%x\n",
       VAR_19, VAR_17);
  FUNC_6(151);
 }
}
