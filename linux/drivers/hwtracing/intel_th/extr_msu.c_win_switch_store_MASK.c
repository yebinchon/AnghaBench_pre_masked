
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {scalar_t__ mode; int buf_mutex; scalar_t__ mbuf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct msc* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct msc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 struct msc *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 != 1)
  return -VAR_0;

 FUNC_3(&VAR_7->buf_mutex);





 if (VAR_7->mode != VAR_2 || VAR_7->mbuf)
  VAR_9 = -VAR_1;
 else
  FUNC_2(VAR_7);
 FUNC_4(&VAR_7->buf_mutex);

 return VAR_9 ? VAR_9 : VAR_6;
}
