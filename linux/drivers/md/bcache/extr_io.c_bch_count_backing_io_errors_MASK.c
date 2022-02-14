
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_dev {unsigned int error_limit; int backing_dev_name; int io_errors; } ;
struct bio {int bi_opf; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (int,int *) ;
 int FUNC_2 (struct cached_dev*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct cached_dev *VAR_1, struct bio *VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(!VAR_1, "NULL pointer of struct cached_dev");







 if (VAR_2->bi_opf & VAR_0) {
  FUNC_4("%s: Read-ahead I/O failed on backing device, ignore",
        VAR_1->backing_dev_name);
  return;
 }

 VAR_3 = FUNC_1(1, &VAR_1->io_errors);
 if (VAR_3 < VAR_1->error_limit)
  FUNC_3("%s: IO error on backing device, unrecoverable",
   VAR_1->backing_dev_name);
 else
  FUNC_2(VAR_1);
}
