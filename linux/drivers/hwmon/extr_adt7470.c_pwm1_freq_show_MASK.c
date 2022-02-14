
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {int lock; int client; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 struct adt7470_data* FUNC_1 (struct device*) ;
 unsigned char FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_7,
         struct device_attribute *VAR_8, char *VAR_9)
{
 struct adt7470_data *VAR_10 = FUNC_1(VAR_7);
 unsigned char VAR_11;
 unsigned char VAR_12;
 int VAR_13;

 FUNC_3(&VAR_10->lock);
 VAR_11 = FUNC_2(VAR_10->client, VAR_3);
 VAR_12 = FUNC_2(VAR_10->client, VAR_4);
 FUNC_4(&VAR_10->lock);

 VAR_13 = (VAR_12 & VAR_1) >> VAR_2;
 if (!(VAR_11 & VAR_0))
  VAR_13 += 8;
 if (VAR_13 >= FUNC_0(VAR_6))
  VAR_13 = FUNC_0(VAR_6) - 1;

 return FUNC_5(VAR_9, VAR_5, "%d\n", VAR_6[VAR_13]);
}
