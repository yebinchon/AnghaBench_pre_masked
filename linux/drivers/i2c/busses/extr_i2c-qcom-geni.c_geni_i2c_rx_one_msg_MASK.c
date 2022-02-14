
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {size_t len; } ;
struct geni_se {scalar_t__ base; } ;
struct geni_i2c_dev {int err; scalar_t__ cur_rd; int done; struct geni_se se; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct geni_i2c_dev*) ;
 int FUNC_1 (struct geni_i2c_dev*) ;
 scalar_t__ FUNC_2 (struct geni_se*,void*,size_t,int *) ;
 int FUNC_3 (struct geni_se*,int ,size_t) ;
 int FUNC_4 (struct geni_se*,int ) ;
 int FUNC_5 (struct geni_se*,int ,int ) ;
 void* FUNC_6 (struct i2c_msg*,int) ;
 int FUNC_7 (void*,struct i2c_msg*,int) ;
 int FUNC_8 (char*) ;
 unsigned long FUNC_9 (int *,int ) ;
 int FUNC_10 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct geni_i2c_dev *VAR_5, struct i2c_msg *VAR_6,
    u32 VAR_7)
{
 dma_addr_t VAR_8;
 unsigned long VAR_9;
 void *VAR_10 = ((void*)0);
 struct geni_se *VAR_11 = &VAR_5->se;
 size_t VAR_12 = VAR_6->len;

 if (!FUNC_8("lenovo,yoga-c630"))
  VAR_10 = FUNC_6(VAR_6, 32);

 if (VAR_10)
  FUNC_4(VAR_11, VAR_0);
 else
  FUNC_4(VAR_11, VAR_1);

 FUNC_10(VAR_12, VAR_11->base + VAR_3);
 FUNC_5(VAR_11, VAR_2, VAR_7);

 if (VAR_10 && FUNC_2(VAR_11, VAR_10, VAR_12, &VAR_8)) {
  FUNC_4(VAR_11, VAR_1);
  FUNC_7(VAR_10, VAR_6, 0);
  VAR_10 = ((void*)0);
 }

 VAR_9 = FUNC_9(&VAR_5->done, VAR_4);
 if (!VAR_9)
  FUNC_0(VAR_5);

 VAR_5->cur_rd = 0;
 if (VAR_10) {
  if (VAR_5->err)
   FUNC_1(VAR_5);
  FUNC_3(VAR_11, VAR_8, VAR_12);
  FUNC_7(VAR_10, VAR_6, !VAR_5->err);
 }

 return VAR_5->err;
}
