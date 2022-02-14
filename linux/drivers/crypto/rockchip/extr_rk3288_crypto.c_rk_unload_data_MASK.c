
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rk_crypto_info {int dev; struct scatterlist sg_tmp; struct scatterlist* sg_dst; scalar_t__ aligned; struct scatterlist* sg_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scatterlist*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct rk_crypto_info *VAR_2)
{
 struct scatterlist *VAR_3, *VAR_4;

 VAR_3 = VAR_2->aligned ? VAR_2->sg_src : &VAR_2->sg_tmp;
 FUNC_0(VAR_2->dev, VAR_3, 1, VAR_1);

 if (VAR_2->sg_dst) {
  VAR_4 = VAR_2->aligned ? VAR_2->sg_dst : &VAR_2->sg_tmp;
  FUNC_0(VAR_2->dev, VAR_4, 1, VAR_0);
 }
}
