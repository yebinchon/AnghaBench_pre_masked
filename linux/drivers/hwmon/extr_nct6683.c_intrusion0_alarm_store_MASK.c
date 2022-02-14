
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6683_data {int valid; int update_lock; int sioreg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nct6683_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct nct6683_data *VAR_8 = FUNC_0(VAR_4);
 unsigned long VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_6, 10, &VAR_9) || VAR_9 != 0)
  return -VAR_0;

 FUNC_2(&VAR_8->update_lock);






 VAR_11 = FUNC_4(VAR_8->sioreg);
 if (VAR_11) {
  VAR_7 = VAR_11;
  goto error;
 }

 FUNC_8(VAR_8->sioreg, VAR_2);
 VAR_10 = FUNC_6(VAR_8->sioreg, VAR_3);
 VAR_10 |= VAR_1;
 FUNC_7(VAR_8->sioreg, VAR_3, VAR_10);
 VAR_10 &= ~VAR_1;
 FUNC_7(VAR_8->sioreg, VAR_3, VAR_10);
 FUNC_5(VAR_8->sioreg);

 VAR_8->valid = 0;
error:
 FUNC_3(&VAR_8->update_lock);
 return VAR_7;
}
