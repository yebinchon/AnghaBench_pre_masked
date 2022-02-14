
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long long offset; scalar_t__ external; long long default_offset; struct file* file; } ;
struct mddev {scalar_t__ major_version; int thread; int sb_flags; int external; TYPE_2__ bitmap_info; struct bitmap* bitmap; TYPE_1__* pers; scalar_t__ sync_thread; scalar_t__ recovery; } ;
struct file {int dummy; } ;
struct bitmap {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int quiesce; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bitmap*) ;
 int VAR_2 ;
 int FUNC_1 (struct bitmap*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (char const*,int,long long*) ;
 struct bitmap* FUNC_4 (struct mddev*,int) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (struct mddev*) ;
 int FUNC_10 (struct mddev*) ;
 int FUNC_11 (struct mddev*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (char const*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_14(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_8(VAR_3);
 if (VAR_6)
  return VAR_6;
 if (VAR_3->pers) {
  if (!VAR_3->pers->quiesce) {
   VAR_6 = -VAR_0;
   goto out;
  }
  if (VAR_3->recovery || VAR_3->sync_thread) {
   VAR_6 = -VAR_0;
   goto out;
  }
 }

 if (VAR_3->bitmap || VAR_3->bitmap_info.file ||
     VAR_3->bitmap_info.offset) {

  if (FUNC_13(VAR_4, "none", 4) != 0) {
   VAR_6 = -VAR_0;
   goto out;
  }
  if (VAR_3->pers) {
   FUNC_10(VAR_3);
   FUNC_5(VAR_3);
   FUNC_9(VAR_3);
  }
  VAR_3->bitmap_info.offset = 0;
  if (VAR_3->bitmap_info.file) {
   struct file *VAR_7 = VAR_3->bitmap_info.file;
   VAR_3->bitmap_info.file = ((void*)0);
   FUNC_2(VAR_7);
  }
 } else {

  long long VAR_8;
  if (FUNC_13(VAR_4, "none", 4) == 0)
                           ;
  else if (FUNC_13(VAR_4, "file:", 5) == 0) {

   VAR_6 = -VAR_1;
   goto out;
  } else {
   if (VAR_4[0] == '+')
    VAR_6 = FUNC_3(VAR_4+1, 10, &VAR_8);
   else
    VAR_6 = FUNC_3(VAR_4, 10, &VAR_8);
   if (VAR_6)
    goto out;
   if (VAR_8 == 0) {
    VAR_6 = -VAR_1;
    goto out;
   }
   if (VAR_3->bitmap_info.external == 0 &&
       VAR_3->major_version == 0 &&
       VAR_8 != VAR_3->bitmap_info.default_offset) {
    VAR_6 = -VAR_1;
    goto out;
   }
   VAR_3->bitmap_info.offset = VAR_8;
   if (VAR_3->pers) {
    struct bitmap *VAR_9;
    VAR_9 = FUNC_4(VAR_3, -1);
    FUNC_10(VAR_3);
    if (FUNC_0(VAR_9))
     VAR_6 = FUNC_1(VAR_9);
    else {
     VAR_3->bitmap = VAR_9;
     VAR_6 = FUNC_6(VAR_3);
     if (VAR_6)
      VAR_3->bitmap_info.offset = 0;
    }
    if (VAR_6) {
     FUNC_5(VAR_3);
     FUNC_9(VAR_3);
     goto out;
    }
    FUNC_9(VAR_3);
   }
  }
 }
 if (!VAR_3->external) {



  FUNC_12(VAR_2, &VAR_3->sb_flags);
  FUNC_7(VAR_3->thread);
 }
 VAR_6 = 0;
out:
 FUNC_11(VAR_3);
 if (VAR_6)
  return VAR_6;
 return VAR_5;
}
