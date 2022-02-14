
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned int,char*,unsigned int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_4 (int ,unsigned int,int ,int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (char*,unsigned int) ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_8 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void
FUNC_9(unsigned VAR_17, unsigned VAR_18)
{
 unsigned VAR_19;
 unsigned VAR_20;
 char *VAR_21;

 VAR_17 -= VAR_17 % VAR_13;
 if (VAR_18 == 0) {
  if (!VAR_12 && VAR_16 > VAR_14)
   FUNC_6("skipping zero size read\n");
  FUNC_2(VAR_3, VAR_2, VAR_17, VAR_18);
  return;
 }
 if (VAR_18 + VAR_17 > VAR_7) {
  if (!VAR_12 && VAR_16 > VAR_14)
   FUNC_6("skipping seek/read past end of file\n");
  FUNC_2(VAR_3, VAR_2, VAR_17, VAR_18);
  return;
 }

 FUNC_2(VAR_2, VAR_17, VAR_18, 0);

 if (VAR_16 <= VAR_14)
  return;

 if (!VAR_12 && ((VAR_11 &&
   VAR_16 % VAR_11 == 0) ||
         (VAR_5 &&
   (VAR_9 == -1 ||
    (VAR_17 + VAR_18 > VAR_9 &&
     (VAR_8 == -1 || VAR_17 <= VAR_8))))))
  FUNC_6("%lu mapread\t0x%x thru\t0x%x\t(0x%x bytes)\n", VAR_16,
      VAR_17, VAR_17 + VAR_18 - 1, VAR_18);

 VAR_19 = VAR_17 & VAR_10;
 VAR_20 = VAR_19 + VAR_18;

 if ((VAR_21 = (char *)FUNC_4(0, VAR_20, VAR_4, VAR_0 | VAR_1, VAR_6,
         (off_t)(VAR_17 - VAR_19))) == (char *)-1) {
  FUNC_7("domapread: mmap");
  FUNC_8(190);
 }
 FUNC_3(VAR_15, VAR_21 + VAR_19, VAR_18);

 FUNC_1("Read", VAR_17, VAR_21, VAR_18);

 if (FUNC_5(VAR_21, VAR_20) != 0) {
  FUNC_7("domapread: munmap");
  FUNC_8(191);
 }

 FUNC_0(VAR_17, VAR_18);
}
