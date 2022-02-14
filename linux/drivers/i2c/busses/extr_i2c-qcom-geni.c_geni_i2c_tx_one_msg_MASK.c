
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {size_t len; } ;
struct geni_se {scalar_t__ base; } ;
struct geni_i2c_dev {int err; scalar_t__ cur_wr; int done; struct geni_se se; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct geni_i2c_dev*) ;
 int FUNC_1 (struct geni_i2c_dev*) ;
 int FUNC_2 (struct geni_se*,int ) ;
 int FUNC_3 (struct geni_se*,int ,int ) ;
 scalar_t__ FUNC_4 (struct geni_se*,void*,size_t,int *) ;
 int FUNC_5 (struct geni_se*,int ,size_t) ;
 void* FUNC_6 (struct i2c_msg*,int) ;
 int FUNC_7 (void*,struct i2c_msg*,int) ;
 int FUNC_8 (char*) ;
 unsigned long FUNC_9 (int *,int ) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct geni_i2c_dev *VAR_6, struct i2c_msg *VAR_7,
    u32 VAR_8)
{
 dma_addr_t VAR_9;
 unsigned long VAR_10;
 void *VAR_11 = ((void*)0);
 struct geni_se *VAR_12 = &VAR_6->se;
 size_t VAR_13 = VAR_7->len;

 if (!FUNC_8("lenovo,yoga-c630"))
  VAR_11 = FUNC_6(VAR_7, 32);

 if (VAR_11)
  FUNC_2(VAR_12, VAR_0);
 else
  FUNC_2(VAR_12, VAR_1);

 FUNC_10(VAR_13, VAR_12->base + VAR_4);
 FUNC_3(VAR_12, VAR_2, VAR_8);

 if (VAR_11 && FUNC_4(VAR_12, VAR_11, VAR_13, &VAR_9)) {
  FUNC_2(VAR_12, VAR_1);
  FUNC_7(VAR_11, VAR_7, 0);
  VAR_11 = ((void*)0);
 }

 if (!VAR_11)
  FUNC_10(1, VAR_12->base + VAR_3);

 VAR_10 = FUNC_9(&VAR_6->done, VAR_5);
 if (!VAR_10)
  FUNC_0(VAR_6);

 VAR_6->cur_wr = 0;
 if (VAR_11) {
  if (VAR_6->err)
   FUNC_1(VAR_6);
  FUNC_5(VAR_12, VAR_9, VAR_13);
  FUNC_7(VAR_11, VAR_7, !VAR_6->err);
 }

 return VAR_6->err;
}
