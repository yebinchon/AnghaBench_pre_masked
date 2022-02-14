
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msc {size_t mode; int buf_mutex; TYPE_1__* mbuf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 struct msc* FUNC_0 (struct device*) ;
 char** VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct msc *VAR_5 = FUNC_0(VAR_2);
 const char *VAR_6 = VAR_1[VAR_5->mode];
 ssize_t VAR_7;

 FUNC_1(&VAR_5->buf_mutex);
 if (VAR_5->mbuf)
  VAR_6 = VAR_5->mbuf->name;
 VAR_7 = FUNC_3(VAR_4, VAR_0, "%s\n", VAR_6);
 FUNC_2(&VAR_5->buf_mutex);

 return VAR_7;
}
