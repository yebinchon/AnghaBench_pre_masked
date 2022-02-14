
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nbd_cmd {int lock; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 struct nbd_cmd* FUNC_1 (struct request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct request *VAR_1, void *VAR_2, bool VAR_3)
{
 struct nbd_cmd *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(&VAR_4->lock);
 VAR_4->status = VAR_0;
 FUNC_3(&VAR_4->lock);

 FUNC_0(VAR_1);
 return 1;
}
