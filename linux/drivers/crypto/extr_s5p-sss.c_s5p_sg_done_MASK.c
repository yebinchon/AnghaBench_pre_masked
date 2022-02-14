
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_aes_reqctx {int mode; } ;
struct s5p_aes_dev {scalar_t__ aes_ioaddr; scalar_t__ sg_dst_cpy; scalar_t__ sg_src_cpy; struct ablkcipher_request* req; int dev; } ;
struct ablkcipher_request {int info; int nbytes; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct s5p_aes_reqctx* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (struct s5p_aes_dev*,scalar_t__*) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct s5p_aes_dev *VAR_3)
{
 struct ablkcipher_request *VAR_4 = VAR_3->req;
 struct s5p_aes_reqctx *VAR_5 = FUNC_2(VAR_4);

 if (VAR_3->sg_dst_cpy) {
  FUNC_3(VAR_3->dev,
   "Copying %d bytes of output data back to original place\n",
   VAR_3->req->nbytes);
  FUNC_6(FUNC_7(VAR_3->sg_dst_cpy), VAR_3->req->dst,
    VAR_3->req->nbytes, 1);
 }
 FUNC_5(VAR_3, &VAR_3->sg_src_cpy);
 FUNC_5(VAR_3, &VAR_3->sg_dst_cpy);
 if (VAR_5->mode & VAR_1)
  FUNC_4(VAR_4->info, VAR_3->aes_ioaddr + FUNC_1(0), VAR_0);

 else if (VAR_5->mode & VAR_2)
  FUNC_4(VAR_4->info, VAR_3->aes_ioaddr + FUNC_0(0), VAR_0);
}
