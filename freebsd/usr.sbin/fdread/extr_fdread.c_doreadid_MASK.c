
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_status {unsigned int cyl; unsigned int heads; unsigned int head; int sec; int secshift; } ;
struct fdc_readid {unsigned int cyl; unsigned int heads; unsigned int head; int sec; int secshift; } ;
struct fd_type {unsigned int cyl; unsigned int heads; unsigned int head; int sec; int secshift; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,struct fdc_status*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned int,unsigned int,int,int) ;
 int FUNC_5 (struct fdc_status*,int ) ;
 int FUNC_6 (char,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(int VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12;
 struct fdc_readid VAR_13;
 struct fdc_status VAR_14;
 struct fd_type VAR_15;

 if (FUNC_2(VAR_8, VAR_4, &VAR_15) == -1)
  FUNC_0(VAR_2, "ioctl(FD_GTYPE) failed -- not a floppy?");

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  VAR_13.cyl = VAR_10 / VAR_15.heads;
  VAR_13.head = VAR_15.heads > 1? VAR_10 % VAR_15.heads: 0;
  if (FUNC_2(VAR_8, VAR_5, &VAR_13) == 0) {
   FUNC_4("C = %d, H = %d, R = %d, N = %d\n",
          VAR_13.cyl, VAR_13.head, VAR_13.sec, VAR_13.secshift);
  } else {
   if (VAR_6 != VAR_0) {
    FUNC_3("non-IO error");
    return (VAR_2);
   }
   if (FUNC_2(VAR_8, VAR_3, &VAR_14) == -1)
    FUNC_1(VAR_1,
         "floppy IO error, but no FDC status");
   FUNC_5(&VAR_14, 0);
   FUNC_6('\n', VAR_7);
   VAR_11 = VAR_1;
  }
 }

 return (VAR_11);
}
