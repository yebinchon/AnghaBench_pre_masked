
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int pages; int * func; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_7,
     struct pmbus_driver_info *VAR_8)
{
 int VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = FUNC_1(VAR_7, VAR_5, VAR_10);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_0(VAR_7, VAR_2);
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_9 & VAR_3) {
   int VAR_11 = VAR_1 + VAR_10;

   VAR_8->pages = VAR_11 + 1;
   VAR_8->func[VAR_11] |= VAR_4;
   VAR_8->func[VAR_11] |= VAR_6;
  }
 }

 return 0;
}
