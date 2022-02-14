
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int off_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,unsigned int,char*,unsigned int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (char*,scalar_t__,unsigned int) ;
 int FUNC_6 (scalar_t__,char,unsigned int) ;
 scalar_t__ FUNC_7 (int ,unsigned int,int,int,int ,unsigned int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_8 (char*,unsigned int,int ) ;
 scalar_t__ FUNC_9 (char*,unsigned int) ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int VAR_19 ;
 int FUNC_12 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (char*) ;
 unsigned int VAR_22 ;

void
FUNC_14(unsigned VAR_23, unsigned VAR_24)
{
 unsigned VAR_25;
 unsigned VAR_26;
 off_t VAR_27;
 char *VAR_28;

 VAR_23 -= VAR_23 % VAR_22;
 if (VAR_24 == 0) {
  if (!VAR_19 && VAR_21 > VAR_20)
   FUNC_10("skipping zero size write\n");
  FUNC_4(VAR_5, VAR_4, VAR_23, VAR_24);
  return;
 }
 VAR_27 = VAR_10;

 FUNC_4(VAR_4, VAR_23, VAR_24, 0);

 FUNC_3(VAR_16, VAR_11, VAR_23, VAR_24);
 if (VAR_10 < VAR_23 + VAR_24) {
  if (VAR_10 < VAR_23)
   FUNC_6(VAR_11 + VAR_10, '\0', VAR_23 - VAR_10);
  VAR_10 = VAR_23 + VAR_24;
  if (VAR_12) {
   FUNC_13("Lite file size bug in fsx!");
   FUNC_12(200);
  }
 }

 if (VAR_21 <= VAR_20)
  return;

 if (!VAR_19 && ((VAR_18 &&
   VAR_21 % VAR_18 == 0) ||
         (VAR_8 &&
   (VAR_15 == -1 ||
    (VAR_23 + VAR_24 > VAR_15 &&
     (VAR_14 == -1 || VAR_23 <= VAR_14))))))
  FUNC_10("%lu mapwrite\t0x%x thru\t0x%x\t(0x%x bytes)\n", VAR_21,
      VAR_23, VAR_23 + VAR_24 - 1, VAR_24);

 if (VAR_10 > VAR_27) {
  if (FUNC_2(VAR_9, VAR_10) == -1) {
   FUNC_11("domapwrite: ftruncate");
   FUNC_1(201);
  }
 }
 VAR_25 = VAR_23 & VAR_17;
 VAR_26 = VAR_25 + VAR_24;

 if ((VAR_28 = (char *)FUNC_7(0, VAR_26, VAR_6 | VAR_7,
         VAR_1 | VAR_2, VAR_9,
         (off_t)(VAR_23 - VAR_25))) == VAR_0) {
  FUNC_11("domapwrite: mmap");
  FUNC_12(202);
 }
 FUNC_5(VAR_28 + VAR_25, VAR_11 + VAR_23, VAR_24);
 if (VAR_13 && FUNC_8(VAR_28, VAR_26, VAR_3) != 0) {
  FUNC_11("domapwrite: msync");
  FUNC_12(203);
 }

 FUNC_0("Write", VAR_23, VAR_28, VAR_24);

 if (FUNC_9(VAR_28, VAR_26) != 0) {
  FUNC_11("domapwrite: munmap");
  FUNC_12(204);
 }
}
