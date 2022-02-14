
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {scalar_t__ private_data; } ;
struct TYPE_2__ {size_t fd_device; int generation; int flags; scalar_t__ maxtrack; scalar_t__ maxblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (int) ;
 int * VAR_9 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct gendisk*,int ) ;
 scalar_t__ FUNC_9 (int,int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_10(struct gendisk *VAR_11)
{
 int VAR_12 = (long)VAR_11->private_data;
 int VAR_13;
 int VAR_14 = 0;

 if (FUNC_9(VAR_1, &VAR_4->flags) ||
     FUNC_9(VAR_3, &VAR_4->flags) ||
     FUNC_9(VAR_12, &VAR_7) ||
     FUNC_4(VAR_12)) {
  if (FUNC_0(FUNC_2(&VAR_10) == 0,
    "VFS: revalidate called on non-open device.\n"))
   return -VAR_0;

  VAR_14 = FUNC_5(VAR_12);
  if (VAR_14)
   return VAR_14;
  VAR_13 = (FUNC_9(VAR_1, &VAR_4->flags) ||
        FUNC_9(VAR_3, &VAR_4->flags));
  if (!(VAR_13 || FUNC_9(VAR_12, &VAR_7) || FUNC_4(VAR_12))) {
   FUNC_7();
   return 0;
  }
  VAR_4->maxblock = 0;
  VAR_4->maxtrack = 0;
  if (VAR_5 == VAR_12)
   VAR_6 = -1;
  FUNC_3(VAR_12, &VAR_7);
  FUNC_3(VAR_1, &VAR_4->flags);
  if (VAR_13)
   VAR_4->generation++;
  if (FUNC_4(VAR_12)) {

   VAR_14 = FUNC_1(VAR_9[VAR_12], VAR_12);
  } else {
   if (VAR_13)
    FUNC_6(0, VAR_2);
   FUNC_7();
  }
 }
 FUNC_8(VAR_11, VAR_8[VAR_4->fd_device]);
 return VAR_14;
}
