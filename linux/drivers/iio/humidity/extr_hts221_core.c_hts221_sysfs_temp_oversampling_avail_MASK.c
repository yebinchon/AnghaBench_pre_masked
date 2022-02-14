
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts221_avg {int * avg_avl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hts221_avg* VAR_2 ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_3,
         struct device_attribute *VAR_4,
         char *VAR_5)
{
 const struct hts221_avg *VAR_6 = &VAR_2[VAR_0];
 ssize_t VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->avg_avl); VAR_8++)
  VAR_7 += FUNC_1(VAR_5 + VAR_7, VAR_1 - VAR_7, "%d ",
     VAR_6->avg_avl[VAR_8]);
 VAR_5[VAR_7 - 1] = '\n';

 return VAR_7;
}
