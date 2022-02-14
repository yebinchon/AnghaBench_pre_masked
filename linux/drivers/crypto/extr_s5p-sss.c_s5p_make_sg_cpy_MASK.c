
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
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct scatterlist*) ;
 struct scatterlist* FUNC_4 (int,int ) ;
 int FUNC_5 (void*,struct scatterlist*,int ,int ) ;
 int FUNC_6 (struct scatterlist*,int) ;
 int FUNC_7 (struct scatterlist*,void*,int) ;

__attribute__((used)) static int FUNC_8(struct s5p_aes_dev *VAR_3, struct scatterlist *VAR_4,
      struct scatterlist **VAR_5)
{
 void *VAR_6;
 int VAR_7;

 *VAR_5 = FUNC_4(sizeof(**VAR_5), VAR_2);
 if (!*VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3->req->nbytes, VAR_0);
 VAR_6 = (void *)FUNC_1(VAR_2, FUNC_2(VAR_7));
 if (!VAR_6) {
  FUNC_3(*VAR_5);
  *VAR_5 = ((void*)0);
  return -VAR_1;
 }

 FUNC_5(VAR_6, VAR_4, VAR_3->req->nbytes, 0);

 FUNC_6(*VAR_5, 1);
 FUNC_7(*VAR_5, VAR_6, VAR_7);

 return 0;
}
