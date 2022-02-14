
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pglist_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int id; } ;
typedef int ssize_t ;


 struct pglist_data* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pglist_data*,int) ;
 scalar_t__ FUNC_2 (char*,char*,char*,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 char** VAR_3 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 int VAR_7 = VAR_4->id;
 struct pglist_data *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;
 int VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  VAR_10 += FUNC_2(VAR_6+VAR_10, "%s %lu\n", VAR_3[VAR_9],
        FUNC_3(VAR_7, VAR_9));
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_10 += FUNC_2(VAR_6+VAR_10, "%s %lu\n",
        VAR_3[VAR_9 + VAR_2 +
        VAR_1],
        FUNC_1(VAR_8, VAR_9));

 return VAR_10;
}
