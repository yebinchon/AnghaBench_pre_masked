
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf {int b_blkno; long long b_bcount; int b_data; TYPE_1__* b_fs; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int sectorsize; int fd; scalar_t__ offset; } ;
typedef TYPE_1__ fsinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (char*,long long,long long,long long) ;
 int FUNC_3 (int ,int ,long long) ;

int
FUNC_4(struct buf *VAR_5)
{
 off_t VAR_6;
 ssize_t VAR_7;
 fsinfo_t *VAR_8 = VAR_5->b_fs;

 FUNC_0 (VAR_5 != ((void*)0));
 VAR_6 = VAR_5->b_blkno * VAR_8->sectorsize + VAR_8->offset;
 if (VAR_3 & VAR_0)
  FUNC_2("bwrite: blkno %lld offset %lld bcount %ld\n",
      (long long)VAR_5->b_blkno, (long long) VAR_6,
      VAR_5->b_bcount);
 if (FUNC_1(VAR_5->b_fs->fd, VAR_6, VAR_2) == -1)
  return (VAR_4);
 VAR_7 = FUNC_3(VAR_5->b_fs->fd, VAR_5->b_data, VAR_5->b_bcount);
 if (VAR_3 & VAR_0)
  FUNC_2("bwrite: write %ld (offset %lld) returned %lld\n",
      VAR_5->b_bcount, (long long)VAR_6, (long long)VAR_7);
 if (VAR_7 == VAR_5->b_bcount)
  return (0);
 else if (VAR_7 == -1)
  return (VAR_4);
 else
  return (VAR_1);
}
