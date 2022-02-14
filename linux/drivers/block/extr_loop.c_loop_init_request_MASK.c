
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct loop_cmd {int work; } ;
struct blk_mq_tag_set {int dummy; } ;


 struct loop_cmd* FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct blk_mq_tag_set *VAR_1, struct request *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 struct loop_cmd *VAR_5 = FUNC_0(VAR_2);

 FUNC_1(&VAR_5->work, VAR_0);
 return 0;
}
