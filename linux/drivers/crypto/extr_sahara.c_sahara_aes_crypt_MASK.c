
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {int kthread; int queue_mutex; int queue; int device; } ;
struct sahara_aes_reqctx {unsigned long mode; } ;
struct ablkcipher_request {int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct ablkcipher_request*) ;
 struct sahara_aes_reqctx* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ,char*,int ,int,int) ;
 int FUNC_4 (int ,char*) ;
 struct sahara_dev* VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ablkcipher_request *VAR_5, unsigned long VAR_6)
{
 struct sahara_aes_reqctx *VAR_7 = FUNC_2(VAR_5);
 struct sahara_dev *VAR_8 = VAR_4;
 int VAR_9 = 0;

 FUNC_3(VAR_8->device, "nbytes: %d, enc: %d, cbc: %d\n",
  VAR_5->nbytes, !!(VAR_6 & VAR_3), !!(VAR_6 & VAR_2));

 if (!FUNC_0(VAR_5->nbytes, VAR_0)) {
  FUNC_4(VAR_8->device,
   "request size is not exact amount of AES blocks\n");
  return -VAR_1;
 }

 VAR_7->mode = VAR_6;

 FUNC_5(&VAR_8->queue_mutex);
 VAR_9 = FUNC_1(&VAR_8->queue, VAR_5);
 FUNC_6(&VAR_8->queue_mutex);

 FUNC_7(VAR_8->kthread);

 return VAR_9;
}
