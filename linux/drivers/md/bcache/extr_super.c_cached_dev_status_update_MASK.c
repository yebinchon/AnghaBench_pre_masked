
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct cached_dev {int io_disable; scalar_t__ offline_seconds; TYPE_1__ disk; int backing_dev_name; int bdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct request_queue* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct cached_dev *VAR_3 = VAR_2;
 struct request_queue *VAR_4;






 while (!FUNC_3() && !VAR_3->io_disable) {
  VAR_4 = FUNC_1(VAR_3->bdev);
  if (FUNC_2(VAR_4))
   VAR_3->offline_seconds++;
  else
   VAR_3->offline_seconds = 0;

  if (VAR_3->offline_seconds >= VAR_0) {
   FUNC_4("%s: device offline for %d seconds",
          VAR_3->backing_dev_name,
          VAR_0);
   FUNC_4("%s: disable I/O request due to backing "
          "device offline", VAR_3->disk.name);
   VAR_3->io_disable = 1;

   FUNC_6();
   FUNC_0(&VAR_3->disk);
   break;
  }
  FUNC_5(VAR_1);
 }

 FUNC_7();
 return 0;
}
