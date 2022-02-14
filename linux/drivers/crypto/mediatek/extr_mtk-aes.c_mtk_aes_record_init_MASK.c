
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {struct mtk_aes_rec** aes; } ;
struct mtk_aes_rec {void* buf; int id; int done_task; int queue_task; int queue; int lock; struct mtk_cryp* cryp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct mtk_aes_rec*) ;
 struct mtk_aes_rec* FUNC_4 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct mtk_cryp *VAR_9)
{
 struct mtk_aes_rec **VAR_10 = VAR_9->aes;
 int VAR_11, VAR_12 = -VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  VAR_10[VAR_11] = FUNC_4(sizeof(**VAR_10), VAR_3);
  if (!VAR_10[VAR_11])
   goto err_cleanup;

  VAR_10[VAR_11]->buf = (void *)FUNC_0(VAR_3,
      VAR_0);
  if (!VAR_10[VAR_11]->buf)
   goto err_cleanup;

  VAR_10[VAR_11]->cryp = VAR_9;

  FUNC_5(&VAR_10[VAR_11]->lock);
  FUNC_1(&VAR_10[VAR_11]->queue, VAR_1);

  FUNC_6(&VAR_10[VAR_11]->queue_task, VAR_8,
        (unsigned long)VAR_10[VAR_11]);
  FUNC_6(&VAR_10[VAR_11]->done_task, VAR_7,
        (unsigned long)VAR_10[VAR_11]);
 }


 VAR_10[0]->id = VAR_5;
 VAR_10[1]->id = VAR_6;

 return 0;

err_cleanup:
 for (; VAR_11--; ) {
  FUNC_2((unsigned long)VAR_10[VAR_11]->buf);
  FUNC_3(VAR_10[VAR_11]);
 }

 return VAR_12;
}
