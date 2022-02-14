
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct applesmc_entry {scalar_t__ len; int key; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(const struct applesmc_entry *VAR_3,
          u8 *VAR_4, u8 VAR_5)
{
 int VAR_6;

 if (VAR_3->len != VAR_5)
  return -VAR_1;
 FUNC_0(&VAR_2.mutex);
 VAR_6 = FUNC_2(VAR_0, VAR_3->key, VAR_4, VAR_5);
 FUNC_1(&VAR_2.mutex);

 return VAR_6;
}
