
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nct6683_data {int update_lock; int sioreg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nct6683_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct nct6683_data *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;
 u8 VAR_8;

 FUNC_1(&VAR_6->update_lock);

 VAR_7 = FUNC_4(VAR_6->sioreg);
 if (VAR_7)
  goto error;
 FUNC_7(VAR_6->sioreg, VAR_1);
 VAR_8 = FUNC_6(VAR_6->sioreg, VAR_2);
 FUNC_5(VAR_6->sioreg);

 FUNC_2(&VAR_6->update_lock);

 return FUNC_3(VAR_5, "%u\n", !!(VAR_8 & VAR_0));

error:
 FUNC_2(&VAR_6->update_lock);
 return VAR_7;
}
