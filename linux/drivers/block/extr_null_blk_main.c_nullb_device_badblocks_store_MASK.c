
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int shift; } ;
struct nullb_device {TYPE_1__ badblocks; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,size_t,int ) ;
 int FUNC_5 (char*,int ,scalar_t__*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;
 struct nullb_device* FUNC_8 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_9(struct config_item *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct nullb_device *VAR_6 = FUNC_8(VAR_3);
 char *VAR_7, *VAR_8, *VAR_9;
 u64 VAR_10, VAR_11;
 int VAR_12;

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_7);

 VAR_12 = -VAR_0;
 if (VAR_8[0] != '+' && VAR_8[0] != '-')
  goto out;
 VAR_9 = FUNC_6(&VAR_8[1], '-');
 if (!VAR_9)
  goto out;
 *VAR_9 = '\0';
 VAR_12 = FUNC_5(VAR_8 + 1, 0, &VAR_10);
 if (VAR_12)
  goto out;
 VAR_12 = FUNC_5(VAR_9 + 1, 0, &VAR_11);
 if (VAR_12)
  goto out;
 VAR_12 = -VAR_0;
 if (VAR_10 > VAR_11)
  goto out;

 FUNC_2(&VAR_6->badblocks.shift, -1, 0);
 if (VAR_8[0] == '+')
  VAR_12 = FUNC_1(&VAR_6->badblocks, VAR_10,
   VAR_11 - VAR_10 + 1, 1);
 else
  VAR_12 = FUNC_0(&VAR_6->badblocks, VAR_10,
   VAR_11 - VAR_10 + 1);
 if (VAR_12 == 0)
  VAR_12 = VAR_5;
out:
 FUNC_3(VAR_7);
 return VAR_12;
}
