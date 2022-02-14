
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bsg_job {int reply; } ;
struct blk_mq_tag_set {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bsg_job* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct blk_mq_tag_set *VAR_3, struct request *VAR_4,
         unsigned int VAR_5, unsigned int VAR_6)
{
 struct bsg_job *VAR_7 = FUNC_0(VAR_4);

 VAR_7->reply = FUNC_1(VAR_2, VAR_1);
 if (!VAR_7->reply)
  return -VAR_0;
 return 0;
}
