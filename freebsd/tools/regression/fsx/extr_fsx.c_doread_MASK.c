
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 unsigned int FUNC_5 (int ,int ,unsigned int) ;
 unsigned int VAR_10 ;
 int FUNC_6 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void
FUNC_7(unsigned VAR_14, unsigned VAR_15)
{
 off_t VAR_16;
 unsigned VAR_17;

 VAR_14 -= VAR_14 % VAR_10;
 if (VAR_15 == 0) {
  if (!VAR_9 && VAR_13 > VAR_11)
   FUNC_3("skipping zero size read\n");
  FUNC_1(VAR_1, VAR_0, VAR_14, VAR_15);
  return;
 }
 if (VAR_15 + VAR_14 > VAR_5) {
  if (!VAR_9 && VAR_13 > VAR_11)
   FUNC_3("skipping seek/read past end of file\n");
  FUNC_1(VAR_1, VAR_0, VAR_14, VAR_15);
  return;
 }

 FUNC_1(VAR_0, VAR_14, VAR_15, 0);

 if (VAR_13 <= VAR_11)
  return;

 if (!VAR_9 && ((VAR_8 &&
   VAR_13 % VAR_8 == 0) ||
         (VAR_3 &&
   (VAR_7 == -1 ||
    (VAR_14 + VAR_15 > VAR_7 &&
     (VAR_6 == -1 || VAR_14 <= VAR_6))))))
  FUNC_3("%lu read\t0x%x thru\t0x%x\t(0x%x bytes)\n", VAR_13,
      VAR_14, VAR_14 + VAR_15 - 1, VAR_15);
 VAR_16 = FUNC_2(VAR_4, (off_t)VAR_14, VAR_2);
 if (VAR_16 == (off_t)-1) {
  FUNC_4("doread: lseek");
  FUNC_6(140);
 }
 VAR_17 = FUNC_5(VAR_4, VAR_12, VAR_15);
 if (VAR_17 != VAR_15) {
  if (VAR_17 == -1)
   FUNC_4("doread: read");
  else
   FUNC_3("short read: 0x%x bytes instead of 0x%x\n",
       VAR_17, VAR_15);
  FUNC_6(141);
 }
 FUNC_0(VAR_14, VAR_15);
}
