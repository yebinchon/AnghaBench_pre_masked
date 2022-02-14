
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device* parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,char const*,int,...) ;
 int FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (struct device*,char const*,int *,int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct input_dev*,unsigned int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3,
          unsigned int VAR_4, unsigned int VAR_5,
          struct input_dev *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev.parent;
 unsigned int VAR_8 = FUNC_3(VAR_5);
 unsigned int VAR_9 = VAR_4 << VAR_8;
 u32 *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 if (!VAR_3)
  VAR_3 = "linux,keymap";

 VAR_12 = FUNC_1(VAR_7, VAR_3);
 if (VAR_12 <= 0) {
  FUNC_0(VAR_7, "missing or malformed property %s: %d\n",
   VAR_3, VAR_12);
  return VAR_12 < 0 ? VAR_12 : -VAR_0;
 }

 if (VAR_12 > VAR_9) {
  FUNC_0(VAR_7, "%s size overflow (%d vs max %u)\n",
   VAR_3, VAR_12, VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_12, sizeof(u32), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_7, VAR_3, VAR_10, VAR_12);
 if (VAR_13) {
  FUNC_0(VAR_7, "failed to read %s property: %d\n",
   VAR_3, VAR_13);
  goto out;
 }

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  if (!FUNC_6(VAR_6, VAR_4, VAR_5,
        VAR_8, VAR_10[VAR_11])) {
   VAR_13 = -VAR_0;
   goto out;
  }
 }

 VAR_13 = 0;

out:
 FUNC_4(VAR_10);
 return VAR_13;
}
