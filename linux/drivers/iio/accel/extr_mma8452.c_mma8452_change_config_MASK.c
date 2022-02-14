
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8452_data {int lock; int client; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mma8452_data*) ;
 int FUNC_2 (struct mma8452_data*) ;
 int FUNC_3 (struct mma8452_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mma8452_data *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_4(&VAR_0->lock);

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 < 0) {
  VAR_3 = VAR_4;
  goto fail;
 }


 if (VAR_4 > 0) {
  VAR_3 = FUNC_3(VAR_0);
  if (VAR_3 < 0)
   goto fail;
 }

 VAR_3 = FUNC_0(VAR_0->client, VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto fail;

 if (VAR_4 > 0) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 < 0)
   goto fail;
 }

 VAR_3 = 0;
fail:
 FUNC_5(&VAR_0->lock);

 return VAR_3;
}
