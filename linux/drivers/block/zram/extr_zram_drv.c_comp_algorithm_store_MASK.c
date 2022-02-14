
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int init_lock; int compressor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int compressor ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct zram* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct zram*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char const*,int) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct zram *VAR_6 = FUNC_1(VAR_2);
 char VAR_7[FUNC_0(VAR_6->compressor)];
 size_t VAR_8;

 FUNC_6(VAR_7, VAR_4, sizeof(VAR_7));

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8 > 0 && VAR_7[VAR_8 - 1] == '\n')
  VAR_7[VAR_8 - 1] = 0x00;

 if (!FUNC_9(VAR_7))
  return -VAR_1;

 FUNC_2(&VAR_6->init_lock);
 if (FUNC_3(VAR_6)) {
  FUNC_8(&VAR_6->init_lock);
  FUNC_4("Can't change algorithm for initialized device\n");
  return -VAR_0;
 }

 FUNC_5(VAR_6->compressor, VAR_7);
 FUNC_8(&VAR_6->init_lock);
 return VAR_5;
}
