
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_acf {int external_mode; int master; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct fsi_master_acf* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fsi_master_acf*) ;
 int FUNC_2 (struct fsi_master_acf*) ;
 int FUNC_3 (struct fsi_master_acf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int ,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct fsi_master_acf *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;
 bool VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_2, 0, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = !!VAR_5;

 FUNC_6(&VAR_4->lock);

 if (VAR_6 == VAR_4->external_mode) {
  FUNC_7(&VAR_4->lock);
  return VAR_3;
 }

 VAR_4->external_mode = VAR_6;
 if (VAR_4->external_mode) {
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
 } else
  FUNC_1(VAR_4);

 FUNC_7(&VAR_4->lock);

 FUNC_4(&VAR_4->master);

 return VAR_3;
}
