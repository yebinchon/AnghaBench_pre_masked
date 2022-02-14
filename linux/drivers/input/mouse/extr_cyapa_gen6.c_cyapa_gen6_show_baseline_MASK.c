
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int dummy; } ;
typedef int ssize_t ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct cyapa*,int ,int,int ,int *,int*) ;
 int FUNC_3 (struct cyapa*) ;
 struct cyapa* FUNC_4 (struct device*) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
  struct device_attribute *VAR_6, char *VAR_7)
{
 struct cyapa *VAR_8 = FUNC_4(VAR_5);
 u8 VAR_9[VAR_1];
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 if (!FUNC_0(VAR_8))
  return -VAR_0;


 VAR_13 = FUNC_3(VAR_8);
 if (VAR_13)
  return VAR_13;


 VAR_10 = sizeof(VAR_9);
 VAR_13 = FUNC_2(VAR_8, 0, VAR_10,
   VAR_3,
   VAR_9, &VAR_10);
 if (VAR_13)
  goto resume_scanning;

 VAR_11 = FUNC_6(VAR_7, VAR_4, "%d %d %d %d %d %d ",
   VAR_9[0],
   VAR_9[1],
   VAR_9[2],
   VAR_9[3],
   VAR_9[4],
   VAR_9[5]
   );


 VAR_10 = sizeof(VAR_9);
 VAR_13 = FUNC_2(VAR_8, 0, VAR_10,
   VAR_2,
   VAR_9, &VAR_10);
 if (VAR_13)
  goto resume_scanning;


 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  VAR_11 += FUNC_6(VAR_7 + VAR_11, VAR_4 - VAR_11, "%d ", VAR_9[VAR_12]);
 VAR_11 += FUNC_6(VAR_7 + VAR_11, VAR_4 - VAR_11, "\n");

resume_scanning:

 VAR_14 = FUNC_1(VAR_8);
 if (VAR_14 || VAR_13) {
  FUNC_5(VAR_7, 0, VAR_4);
  return VAR_14 ? VAR_14 : VAR_13;
 }

 return VAR_11;
}
