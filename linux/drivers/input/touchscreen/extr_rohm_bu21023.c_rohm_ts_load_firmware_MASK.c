
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct firmware {unsigned int size; int * data; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct device*,char*,char const*,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,unsigned int,int *) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_17,
     const char *VAR_18)
{
 struct device *VAR_19 = &VAR_17->dev;
 const struct firmware *VAR_20;
 s32 VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24;
 unsigned int VAR_25 = 0;
 int VAR_26, VAR_27;

 VAR_26 = FUNC_7(&VAR_20, VAR_18, VAR_19);
 if (VAR_26) {
  FUNC_0(VAR_19, "unable to retrieve firmware %s: %d\n",
   VAR_18, VAR_26);
  return VAR_26;
 }

 VAR_26 = FUNC_3(VAR_17, VAR_12,
       VAR_3 | VAR_0 |
       VAR_15 | VAR_16);
 if (VAR_26)
  goto out;

 do {
  if (VAR_25) {
   FUNC_1(VAR_19, "retrying firmware load\n");


   VAR_26 = FUNC_3(VAR_17, VAR_7, 0);
   if (VAR_26)
    goto out;
  }

  VAR_26 = FUNC_3(VAR_17, VAR_5, 0);
  if (VAR_26)
   goto out;

  VAR_26 = FUNC_3(VAR_17, VAR_6, 0);
  if (VAR_26)
   goto out;

  VAR_26 = FUNC_3(VAR_17, VAR_1,
        VAR_2);
  if (VAR_26)
   goto out;


  VAR_22 = 0;
  VAR_23 = VAR_20->size;

  while (VAR_23) {
   VAR_24 = FUNC_5(VAR_8, VAR_23);

   VAR_26 = FUNC_4(VAR_17, VAR_7,
      VAR_24, &VAR_20->data[VAR_22]);
   if (VAR_26)
    goto out;

   VAR_23 -= VAR_24;
   VAR_22 += VAR_24;
  }


  VAR_21 = FUNC_2(VAR_17, VAR_13);
  if (VAR_21 < 0) {
   VAR_26 = VAR_21;
   goto out;
  }


  VAR_26 = FUNC_3(VAR_17, VAR_11, 0xff);
  if (VAR_26)
   goto out;

  if (VAR_21 == VAR_14)
   break;

  VAR_26 = -VAR_4;
 } while (++VAR_25 <= VAR_9);

out:
 VAR_27 = FUNC_3(VAR_17, VAR_12, VAR_10);

 FUNC_6(VAR_20);

 return VAR_26 ? VAR_26 : VAR_27;
}
