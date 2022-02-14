
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct file* file; scalar_t__ offset; } ;
struct mddev {int lock; TYPE_3__ bitmap_info; struct bitmap* bitmap; TYPE_2__* pers; scalar_t__ sync_thread; scalar_t__ recovery; int thread; } ;
struct inode {int i_writecount; int i_mode; } ;
struct file {int f_mode; TYPE_1__* f_mapping; } ;
struct bitmap {int dummy; } ;
struct TYPE_5__ {int quiesce; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bitmap*) ;
 int FUNC_1 (struct bitmap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct file* FUNC_4 (int) ;
 int FUNC_5 (struct file*) ;
 struct bitmap* FUNC_6 (struct mddev*,int) ;
 int FUNC_7 (struct mddev*) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (struct mddev*) ;
 int FUNC_10 (struct mddev*) ;
 int FUNC_11 (struct mddev*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct mddev *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5->pers) {
  if (!VAR_5->pers->quiesce || !VAR_5->thread)
   return -VAR_1;
  if (VAR_5->recovery || VAR_5->sync_thread)
   return -VAR_1;

 }

 if (VAR_6 >= 0) {
  struct inode *VAR_8;
  struct file *VAR_9;

  if (VAR_5->bitmap || VAR_5->bitmap_info.file)
   return -VAR_2;
  VAR_9 = FUNC_4(VAR_6);

  if (VAR_9 == ((void*)0)) {
   FUNC_12("%s: error: failed to get bitmap file\n",
    FUNC_11(VAR_5));
   return -VAR_0;
  }

  VAR_8 = VAR_9->f_mapping->host;
  if (!FUNC_2(VAR_8->i_mode)) {
   FUNC_12("%s: error: bitmap file must be a regular file\n",
    FUNC_11(VAR_5));
   VAR_7 = -VAR_0;
  } else if (!(VAR_9->f_mode & VAR_4)) {
   FUNC_12("%s: error: bitmap file must open for write\n",
    FUNC_11(VAR_5));
   VAR_7 = -VAR_0;
  } else if (FUNC_3(&VAR_8->i_writecount) != 1) {
   FUNC_12("%s: error: bitmap file is already in use\n",
    FUNC_11(VAR_5));
   VAR_7 = -VAR_1;
  }
  if (VAR_7) {
   FUNC_5(VAR_9);
   return VAR_7;
  }
  VAR_5->bitmap_info.file = VAR_9;
  VAR_5->bitmap_info.offset = 0;
 } else if (VAR_5->bitmap == ((void*)0))
  return -VAR_3;
 VAR_7 = 0;
 if (VAR_5->pers) {
  if (VAR_6 >= 0) {
   struct bitmap *VAR_10;

   VAR_10 = FUNC_6(VAR_5, -1);
   FUNC_10(VAR_5);
   if (!FUNC_0(VAR_10)) {
    VAR_5->bitmap = VAR_10;
    VAR_7 = FUNC_8(VAR_5);
   } else
    VAR_7 = FUNC_1(VAR_10);
   if (VAR_7) {
    FUNC_7(VAR_5);
    VAR_6 = -1;
   }
   FUNC_9(VAR_5);
  } else if (VAR_6 < 0) {
   FUNC_10(VAR_5);
   FUNC_7(VAR_5);
   FUNC_9(VAR_5);
  }
 }
 if (VAR_6 < 0) {
  struct file *VAR_11 = VAR_5->bitmap_info.file;
  if (VAR_11) {
   FUNC_13(&VAR_5->lock);
   VAR_5->bitmap_info.file = ((void*)0);
   FUNC_14(&VAR_5->lock);
   FUNC_5(VAR_11);
  }
 }

 return VAR_7;
}
