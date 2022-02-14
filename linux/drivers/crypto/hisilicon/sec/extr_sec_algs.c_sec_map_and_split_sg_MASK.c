
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct scatterlist*,int,int ) ;
 int FUNC_1 (struct device*,struct scatterlist*,int,int ) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct scatterlist*,int,int ,int,size_t*,struct scatterlist**,int*,int ) ;

__attribute__((used)) static int FUNC_5(struct scatterlist *VAR_4, size_t *VAR_5,
    int VAR_6, struct scatterlist ***VAR_7,
    int **VAR_8,
    int VAR_9,
    struct device *VAR_10)
{
 int VAR_11, VAR_12;

 VAR_12 = FUNC_0(VAR_10, VAR_4, VAR_9, VAR_0);
 if (!VAR_12)
  return -VAR_1;

 *VAR_7 = FUNC_2(VAR_6, sizeof(struct scatterlist *), VAR_3);
 if (!*VAR_7) {
  VAR_11 = -VAR_2;
  goto err_unmap_sg;
 }
 *VAR_8 = FUNC_2(VAR_6, sizeof(int), VAR_3);
 if (!*VAR_8) {
  VAR_11 = -VAR_2;
  goto err_free_splits;
 }


 VAR_11 = FUNC_4(VAR_4, VAR_12, 0, VAR_6, VAR_5,
         *VAR_7, *VAR_8, VAR_3);
 if (VAR_11) {
  VAR_11 = -VAR_2;
  goto err_free_splits_nents;
 }

 return 0;

err_free_splits_nents:
 FUNC_3(*VAR_8);
err_free_splits:
 FUNC_3(*VAR_7);
err_unmap_sg:
 FUNC_1(VAR_10, VAR_4, VAR_9, VAR_0);

 return VAR_11;
}
