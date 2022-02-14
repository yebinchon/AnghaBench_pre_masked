
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fs {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef scalar_t__ intmax_t ;
struct TYPE_3__ {scalar_t__ fs_magic; } ;
struct TYPE_4__ {int * buf; TYPE_1__ sblock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 char FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int,scalar_t__,int ) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (char*,int ,int ) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_8 (int,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (char*,char**,int) ;
 TYPE_2__ VAR_10 ;

int
FUNC_10(int VAR_11, char **VAR_12)
{
 off_t VAR_13, VAR_14, VAR_15;
 size_t VAR_16;
 ssize_t VAR_17;
 int VAR_18;
 char *VAR_19;
 char VAR_20;
 intmax_t VAR_21;

 VAR_21 = 0;
 while ((VAR_20 = FUNC_3(VAR_11, VAR_12, "o:")) != -1) {
  switch (VAR_20) {
  case 'o':
   if (VAR_8[0] == '\0')
    FUNC_1(1, "usage");
   VAR_21 = FUNC_9(VAR_8, &VAR_19, 10);
   if (*VAR_19 != '\0' || VAR_21 < 0)
    FUNC_1(1, "usage");
   VAR_21 -= VAR_21 % VAR_0;
   break;

  default:
   FUNC_1(1, "usage");
  }
 }
 VAR_11 -= VAR_9;
 VAR_12 += VAR_9;

 if (VAR_11 != 1)
  FUNC_1(1, "usage");

 VAR_18 = FUNC_6(VAR_12[0], VAR_3, 0);
 if (VAR_18 < 0)
  FUNC_0(1, "%s", VAR_12[0]);

 if (VAR_21 != 0) {
  VAR_13 = FUNC_4(VAR_18, VAR_21, VAR_7);
  if (VAR_13 == -1)
   FUNC_0(1, "%s", VAR_12[0]);
 } else {
  VAR_13 = 0;
 }
 VAR_16 = 0;
 VAR_14 = VAR_15 = -1;

 while (1) {
  VAR_17 = FUNC_8(VAR_18, &VAR_10.buf[VAR_16], VAR_0);
  if (VAR_17 != VAR_0) {
   if (VAR_17 == 0) {
    FUNC_7("reached end-of-file at %jd\n",
           (intmax_t)VAR_13);
    FUNC_2 (0);
   }
   if (VAR_17 < 0)
    FUNC_0(1, "read");
   FUNC_1(1, "short read %jd (wanted %d) at %jd",
        (intmax_t)VAR_17, VAR_0, (intmax_t)VAR_13);
  }
  VAR_16 += VAR_0;
  VAR_13 += VAR_0;
  if (VAR_16 >= sizeof(struct fs)) {
   VAR_21 = VAR_13 - VAR_16;

   if (VAR_10.sblock.fs_magic == VAR_1) {
    intmax_t VAR_22 = VAR_21 - VAR_5;
    FUNC_7("Found UFS1 superblock at offset %jd, "
           "block %jd\n", VAR_21,
           VAR_21 / VAR_0);
    FUNC_7("Filesystem might begin at offset %jd, "
           "block %jd\n", VAR_22,
           VAR_22 / VAR_0);
    if (VAR_14 >= 0) {
     FUNC_7("%jd blocks from last guess\n",
            VAR_22 / VAR_0 - VAR_14);
    }
    VAR_14 = VAR_22 / VAR_0;
    VAR_16 -= VAR_0;
    FUNC_5(VAR_10.buf, &VAR_10.buf[VAR_0], VAR_16);
   } else if (VAR_10.sblock.fs_magic == VAR_2) {
    intmax_t VAR_23 = VAR_21 - VAR_6;
    FUNC_7("Found UFS2 superblock at offset %jd, "
           "block %jd\n", VAR_21,
           VAR_21 / VAR_0);
    FUNC_7("Filesystem might begin at offset %jd, "
           "block %jd\n", VAR_23,
           VAR_23 / VAR_0);
    if (VAR_15 >= 0) {
     FUNC_7("%jd blocks from last guess\n",
            VAR_23 / VAR_0 - VAR_15);
    }
    VAR_15 = VAR_23 / VAR_0;
    VAR_16 -= VAR_0;
    FUNC_5(VAR_10.buf, &VAR_10.buf[VAR_0], VAR_16);
   }
  }
  if (VAR_16 >= VAR_4) {
   FUNC_5(VAR_10.buf, &VAR_10.buf[VAR_0],
    VAR_4 - VAR_0);
   VAR_16 -= VAR_0;
  }
 }
}
