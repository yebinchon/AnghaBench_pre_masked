
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int pages; int* func; int * b; int * m; int * R; int write_word_data; int read_word_data; int read_byte_data; void** format; } ;
struct lm25066_data {size_t id; int rlimit; struct pmbus_driver_info info; } ;
struct i2c_device_id {size_t driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
struct __coeff {int b; int m; int R; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 struct lm25066_data* FUNC_0 (int *,int,int ) ;
 void* VAR_24 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct __coeff** VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_31,
     const struct i2c_device_id *VAR_32)
{
 int VAR_33;
 struct lm25066_data *VAR_34;
 struct pmbus_driver_info *VAR_35;
 struct __coeff *VAR_36;

 if (!FUNC_1(VAR_31->adapter,
         VAR_3))
  return -VAR_0;

 VAR_34 = FUNC_0(&VAR_31->dev, sizeof(struct lm25066_data),
       VAR_2);
 if (!VAR_34)
  return -VAR_1;

 VAR_33 = FUNC_2(VAR_31, VAR_4);
 if (VAR_33 < 0)
  return VAR_33;

 VAR_34->id = VAR_32->driver_data;
 VAR_35 = &VAR_34->info;

 VAR_35->pages = 1;
 VAR_35->format[VAR_22] = VAR_24;
 VAR_35->format[VAR_23] = VAR_24;
 VAR_35->format[VAR_17] = VAR_24;
 VAR_35->format[VAR_21] = VAR_24;
 VAR_35->format[VAR_19] = VAR_24;

 VAR_35->func[0] = VAR_14 | VAR_15
   | VAR_7 | VAR_6 | VAR_9
   | VAR_13 | VAR_10 | VAR_8;

 if (VAR_34->id == VAR_25) {
  VAR_35->func[0] |= VAR_11;
  VAR_35->read_word_data = VAR_27;
  VAR_35->read_byte_data = VAR_26;
  VAR_34->rlimit = 0x0fff;
 } else {
  VAR_35->func[0] |= VAR_16 | VAR_12;
  VAR_35->read_word_data = VAR_29;
  VAR_34->rlimit = 0x0fff;
 }
 VAR_35->write_word_data = VAR_30;

 VAR_36 = &VAR_28[VAR_34->id][0];
 VAR_35->m[VAR_21] = VAR_36[VAR_21].m;
 VAR_35->b[VAR_21] = VAR_36[VAR_21].b;
 VAR_35->R[VAR_21] = VAR_36[VAR_21].R;
 VAR_35->m[VAR_22] = VAR_36[VAR_22].m;
 VAR_35->b[VAR_22] = VAR_36[VAR_22].b;
 VAR_35->R[VAR_22] = VAR_36[VAR_22].R;
 VAR_35->m[VAR_23] = VAR_36[VAR_23].m;
 VAR_35->b[VAR_23] = VAR_36[VAR_23].b;
 VAR_35->R[VAR_23] = VAR_36[VAR_23].R;
 VAR_35->R[VAR_17] = VAR_36[VAR_17].R;
 VAR_35->R[VAR_19] = VAR_36[VAR_19].R;
 if (VAR_33 & VAR_5) {
  VAR_35->m[VAR_17] = VAR_36[VAR_18].m;
  VAR_35->b[VAR_17] = VAR_36[VAR_18].b;
  VAR_35->m[VAR_19] = VAR_36[VAR_20].m;
  VAR_35->b[VAR_19] = VAR_36[VAR_20].b;
 } else {
  VAR_35->m[VAR_17] = VAR_36[VAR_17].m;
  VAR_35->b[VAR_17] = VAR_36[VAR_17].b;
  VAR_35->m[VAR_19] = VAR_36[VAR_19].m;
  VAR_35->b[VAR_19] = VAR_36[VAR_19].b;
 }

 return FUNC_3(VAR_31, VAR_32, VAR_35);
}
