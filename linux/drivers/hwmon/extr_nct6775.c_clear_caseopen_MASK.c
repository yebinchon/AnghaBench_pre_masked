
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nct6775_data {int valid; int update_lock; int sioreg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 struct nct6775_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_5, struct device_attribute *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 struct nct6775_data *VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = FUNC_9(VAR_6)->index - VAR_1;
 unsigned long VAR_11;
 u8 VAR_12;
 int VAR_13;

 if (FUNC_1(VAR_7, 10, &VAR_11) || VAR_11 != 0)
  return -VAR_0;

 FUNC_2(&VAR_9->update_lock);






 VAR_13 = FUNC_4(VAR_9->sioreg);
 if (VAR_13) {
  VAR_8 = VAR_13;
  goto error;
 }

 FUNC_8(VAR_9->sioreg, VAR_3);
 VAR_12 = FUNC_6(VAR_9->sioreg, VAR_4[VAR_10]);
 VAR_12 |= VAR_2[VAR_10];
 FUNC_7(VAR_9->sioreg, VAR_4[VAR_10], VAR_12);
 VAR_12 &= ~VAR_2[VAR_10];
 FUNC_7(VAR_9->sioreg, VAR_4[VAR_10], VAR_12);
 FUNC_5(VAR_9->sioreg);

 VAR_9->valid = 0;
error:
 FUNC_3(&VAR_9->update_lock);
 return VAR_8;
}
