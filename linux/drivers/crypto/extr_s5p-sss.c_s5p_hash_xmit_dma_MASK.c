
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int error; size_t digcnt; size_t total; int sg; int sg_len; } ;
struct s5p_aes_dev {unsigned int hash_sg_cnt; int hash_sg_iter; int hash_flags; int dev; int hash_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct s5p_hash_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct s5p_aes_dev*,size_t,int) ;
 int FUNC_4 (struct s5p_aes_dev*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct s5p_aes_dev *VAR_5, size_t VAR_6,
        bool VAR_7)
{
 struct s5p_hash_reqctx *VAR_8 = FUNC_0(VAR_5->hash_req);
 unsigned int VAR_9;

 VAR_9 = FUNC_2(VAR_5->dev, VAR_8->sg, VAR_8->sg_len, VAR_0);
 if (!VAR_9) {
  FUNC_1(VAR_5->dev, "dma_map_sg error\n");
  VAR_8->error = 1;
  return -VAR_2;
 }

 FUNC_5(VAR_3, &VAR_5->hash_flags);
 VAR_5->hash_sg_iter = VAR_8->sg;
 VAR_5->hash_sg_cnt = VAR_9;
 FUNC_3(VAR_5, VAR_6, VAR_7);
 VAR_8->digcnt += VAR_6;
 VAR_8->total -= VAR_6;


 if (VAR_7)
  FUNC_5(VAR_4, &VAR_5->hash_flags);

 FUNC_4(VAR_5, VAR_5->hash_sg_iter);

 return -VAR_1;
}
