
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {unsigned long disksize; int init_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct zram* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zram*) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct zram*,int) ;
 int FUNC_6 (struct zram*,int,int ) ;
 int FUNC_7 (struct zram*,int) ;
 int FUNC_8 (struct zram*,int) ;
 int FUNC_9 (struct zram*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct zram *VAR_8 = FUNC_0(VAR_4);
 unsigned long VAR_9 = VAR_8->disksize >> VAR_1;
 int VAR_10;

 if (!FUNC_3(VAR_6, "all"))
  return -VAR_0;

 FUNC_1(&VAR_8->init_lock);
 if (!FUNC_2(VAR_8)) {
  FUNC_4(&VAR_8->init_lock);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {




  FUNC_7(VAR_8, VAR_10);
  if (FUNC_5(VAR_8, VAR_10) &&
    !FUNC_9(VAR_8, VAR_10, VAR_3))
   FUNC_6(VAR_8, VAR_10, VAR_2);
  FUNC_8(VAR_8, VAR_10);
 }

 FUNC_4(&VAR_8->init_lock);

 return VAR_7;
}
