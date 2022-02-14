
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct bio* bio; } ;
struct loop_cmd {scalar_t__ ret; scalar_t__ use_aio; } ;
struct bio {struct bio* bi_next; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*,int) ;
 struct loop_cmd* FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct request*) ;
 int FUNC_6 (struct bio*) ;

__attribute__((used)) static void FUNC_7(struct request *VAR_3)
{
 struct loop_cmd *VAR_4 = FUNC_2(VAR_3);
 blk_status_t VAR_5 = VAR_1;

 if (!VAR_4->use_aio || VAR_4->ret < 0 || VAR_4->ret == FUNC_3(VAR_3) ||
     FUNC_5(VAR_3) != VAR_2) {
  if (VAR_4->ret < 0)
   VAR_5 = VAR_0;
  goto end_io;
 }





 if (VAR_4->ret) {
  FUNC_4(VAR_3, VAR_1, VAR_4->ret);
  VAR_4->ret = 0;
  FUNC_1(VAR_3, 1);
 } else {
  if (VAR_4->use_aio) {
   struct bio *VAR_6 = VAR_3->bio;

   while (VAR_6) {
    FUNC_6(VAR_6);
    VAR_6 = VAR_6->bi_next;
   }
  }
  VAR_5 = VAR_0;
end_io:
  FUNC_0(VAR_3, VAR_5);
 }
}
