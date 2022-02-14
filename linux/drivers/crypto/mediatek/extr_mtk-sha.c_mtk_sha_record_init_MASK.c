
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_rec {int id; int done_task; int queue_task; int queue; int lock; struct mtk_cryp* cryp; } ;
struct mtk_cryp {int rec; struct mtk_sha_rec** sha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mtk_sha_rec*) ;
 struct mtk_sha_rec* FUNC_2 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mtk_cryp *VAR_8)
{
 struct mtk_sha_rec **VAR_9 = VAR_8->sha;
 int VAR_10, VAR_11 = -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_9[VAR_10] = FUNC_2(sizeof(**VAR_9), VAR_1);
  if (!VAR_9[VAR_10])
   goto err_cleanup;

  VAR_9[VAR_10]->cryp = VAR_8;

  FUNC_3(&VAR_9[VAR_10]->lock);
  FUNC_0(&VAR_9[VAR_10]->queue, VAR_5);

  FUNC_4(&VAR_9[VAR_10]->queue_task, VAR_7,
        (unsigned long)VAR_9[VAR_10]);
  FUNC_4(&VAR_9[VAR_10]->done_task, VAR_6,
        (unsigned long)VAR_9[VAR_10]);
 }


 VAR_9[0]->id = VAR_3;
 VAR_9[1]->id = VAR_4;

 VAR_8->rec = 1;

 return 0;

err_cleanup:
 for (; VAR_10--; )
  FUNC_1(VAR_9[VAR_10]);
 return VAR_11;
}
