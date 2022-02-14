
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nbd_cmd {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int) ;
 struct request* FUNC_1 (struct nbd_cmd*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct nbd_cmd *VAR_1)
{
 struct request *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_2(VAR_0, &VAR_1->flags))
  FUNC_0(VAR_2, 1);
}
