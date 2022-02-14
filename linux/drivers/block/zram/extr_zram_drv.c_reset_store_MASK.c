
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int claim; int disk; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct block_device {int bd_mutex; scalar_t__ bd_openers; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct block_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct block_device*) ;
 struct zram* FUNC_2 (struct device*) ;
 int FUNC_3 (struct block_device*) ;
 int FUNC_4 (char const*,int,unsigned short*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct zram*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned short VAR_8;
 struct zram *VAR_9;
 struct block_device *VAR_10;

 VAR_7 = FUNC_4(VAR_5, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_3);
 VAR_10 = FUNC_0(VAR_9->disk, 0);
 if (!VAR_10)
  return -VAR_2;

 FUNC_5(&VAR_10->bd_mutex);

 if (VAR_10->bd_openers || VAR_9->claim) {
  FUNC_6(&VAR_10->bd_mutex);
  FUNC_1(VAR_10);
  return -VAR_0;
 }


 VAR_9->claim = 1;
 FUNC_6(&VAR_10->bd_mutex);


 FUNC_3(VAR_10);
 FUNC_8(VAR_9);
 FUNC_7(VAR_9->disk);
 FUNC_1(VAR_10);

 FUNC_5(&VAR_10->bd_mutex);
 VAR_9->claim = 0;
 FUNC_6(&VAR_10->bd_mutex);

 return VAR_6;
}
