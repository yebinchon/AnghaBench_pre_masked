
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct statvfs {int f_iosize; } ;
struct TYPE_7__ {scalar_t__ cs_nifree; scalar_t__ cs_ndir; scalar_t__ cs_nffree; scalar_t__ cs_nbfree; } ;
struct fs {TYPE_1__ fs_cstotal; scalar_t__ fs_time; } ;
typedef scalar_t__ off_t ;
struct TYPE_8__ {scalar_t__ offset; int fd; scalar_t__ size; scalar_t__ inodes; void* superblock; scalar_t__ sparse; } ;
typedef TYPE_2__ fsinfo_t ;
struct TYPE_10__ {scalar_t__ st_ino; scalar_t__ st_ctime; } ;
struct TYPE_9__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__*) ;
 int VAR_6 ;
 char* FUNC_3 (int,int) ;
 struct fs* FUNC_4 (char const*,TYPE_2__*,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,struct statvfs*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__,int ) ;
 int FUNC_9 (char const*,int,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (scalar_t__) ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*,char const*,long long,long long) ;
 int FUNC_14 (int,char*,int ) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_9, fsinfo_t *VAR_10)
{



 struct fs *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;
 off_t VAR_15;
 int VAR_16 = VAR_2 | VAR_1;
 time_t VAR_17;

 FUNC_1 (VAR_9 != ((void*)0));
 FUNC_1 (VAR_10 != ((void*)0));


 if (VAR_10->offset == 0)
  VAR_16 |= VAR_3;
 if ((VAR_10->fd = FUNC_9(VAR_9, VAR_16, 0666)) == -1) {
  FUNC_12("Can't open `%s' for writing", VAR_9);
  return (-1);
 }





  VAR_14 = 8192;






 VAR_15 = VAR_10->size;
 if (VAR_10->sparse) {
  if (FUNC_7(VAR_10->fd, VAR_15) == -1) {
   FUNC_12("sparse option disabled.");
   VAR_10->sparse = 0;
  }
 }
 if (VAR_10->sparse) {

  VAR_15 = 0;
  VAR_12 = ((void*)0);
 } else {
  if (VAR_6 & VAR_0)
   FUNC_10("zero-ing image `%s', %lld sectors, "
       "using %d byte chunks\n", VAR_9, (long long)VAR_15,
       VAR_14);
  VAR_12 = FUNC_3(1, VAR_14);
 }

 if (VAR_10->offset != 0)
  if (FUNC_8(VAR_10->fd, VAR_10->offset, VAR_4) == -1) {
   FUNC_12("can't seek");
   FUNC_5(VAR_12);
   return -1;
  }

 while (VAR_15 > 0) {
  VAR_13 = FUNC_14(VAR_10->fd, VAR_12, FUNC_0(VAR_14, VAR_15));
  if (VAR_13 == -1) {
   FUNC_12("zeroing image, %lld bytes to go",
       (long long)VAR_15);
   FUNC_5(VAR_12);
   return (-1);
  }
  VAR_15 -= VAR_13;
 }
 if (VAR_12)
  FUNC_5(VAR_12);


 if (VAR_6 & VAR_0)
  FUNC_10("calling mkfs(\"%s\", ...)\n", VAR_9);

 if (VAR_7.st_ino != 0)
  VAR_17 = VAR_7.st_ctime;
 else
  VAR_17 = VAR_8.tv_sec;

 FUNC_11(VAR_17);

 VAR_11 = FUNC_4(VAR_9, VAR_10, VAR_17);
 VAR_10->superblock = (void *)VAR_11;
 if (VAR_6 & VAR_0) {
  time_t VAR_18;

  VAR_18 = (time_t)((struct fs *)VAR_10->superblock)->fs_time;
  FUNC_10("mkfs returned %p; fs_time %s",
      VAR_10->superblock, FUNC_2(&VAR_18));
  FUNC_10("fs totals: nbfree %lld, nffree %lld, nifree %lld, ndir %lld\n",
      (long long)VAR_11->fs_cstotal.cs_nbfree,
      (long long)VAR_11->fs_cstotal.cs_nffree,
      (long long)VAR_11->fs_cstotal.cs_nifree,
      (long long)VAR_11->fs_cstotal.cs_ndir);
 }

 if (VAR_11->fs_cstotal.cs_nifree + VAR_5 < VAR_10->inodes) {
  FUNC_13(
  "Image file `%s' has %lld free inodes; %lld are required.",
      VAR_9,
      (long long)(VAR_11->fs_cstotal.cs_nifree + VAR_5),
      (long long)VAR_10->inodes);
  return (-1);
 }
 return (VAR_10->fd);
}
