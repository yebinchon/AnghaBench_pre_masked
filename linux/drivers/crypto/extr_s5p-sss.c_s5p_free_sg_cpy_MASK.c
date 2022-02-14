
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct s5p_aes_dev {TYPE_1__* req; } ;
struct TYPE_2__ {int nbytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct scatterlist*) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct s5p_aes_dev *VAR_1, struct scatterlist **VAR_2)
{
 int VAR_3;

 if (!*VAR_2)
  return;

 VAR_3 = FUNC_0(VAR_1->req->nbytes, VAR_0);
 FUNC_1((unsigned long)FUNC_4(*VAR_2), FUNC_2(VAR_3));

 FUNC_3(*VAR_2);
 *VAR_2 = ((void*)0);
}
