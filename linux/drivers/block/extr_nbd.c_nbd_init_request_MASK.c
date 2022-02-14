
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nbd_cmd {int lock; scalar_t__ flags; int nbd; } ;
struct blk_mq_tag_set {int driver_data; } ;


 struct nbd_cmd* FUNC_0 (struct request*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct blk_mq_tag_set *VAR_0, struct request *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct nbd_cmd *VAR_4 = FUNC_0(VAR_1);
 VAR_4->nbd = VAR_0->driver_data;
 VAR_4->flags = 0;
 FUNC_1(&VAR_4->lock);
 return 0;
}
