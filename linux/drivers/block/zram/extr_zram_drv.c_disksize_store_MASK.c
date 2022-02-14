
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zram {int disksize; int init_lock; int disk; struct zcomp* comp; int compressor; } ;
struct zcomp {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct zcomp*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct zcomp*) ;
 int VAR_3 ;
 struct zram* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct zram*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;
 struct zcomp* FUNC_12 (int ) ;
 int FUNC_13 (struct zram*,int) ;
 int FUNC_14 (struct zram*,int) ;

__attribute__((used)) static ssize_t FUNC_15(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 u64 VAR_8;
 struct zcomp *VAR_9;
 struct zram *VAR_10 = FUNC_3(VAR_4);
 int VAR_11;

 VAR_8 = FUNC_6(VAR_6, ((void*)0));
 if (!VAR_8)
  return -VAR_1;

 FUNC_4(&VAR_10->init_lock);
 if (FUNC_5(VAR_10)) {
  FUNC_8("Cannot change disksize for initialized device\n");
  VAR_11 = -VAR_0;
  goto out_unlock;
 }

 VAR_8 = FUNC_1(VAR_8);
 if (!FUNC_13(VAR_10, VAR_8)) {
  VAR_11 = -VAR_2;
  goto out_unlock;
 }

 VAR_9 = FUNC_12(VAR_10->compressor);
 if (FUNC_0(VAR_9)) {
  FUNC_7("Cannot initialise %s compressing backend\n",
    VAR_10->compressor);
  VAR_11 = FUNC_2(VAR_9);
  goto out_free_meta;
 }

 VAR_10->comp = VAR_9;
 VAR_10->disksize = VAR_8;
 FUNC_10(VAR_10->disk, VAR_10->disksize >> VAR_3);

 FUNC_9(VAR_10->disk);
 FUNC_11(&VAR_10->init_lock);

 return VAR_7;

out_free_meta:
 FUNC_14(VAR_10, VAR_8);
out_unlock:
 FUNC_11(&VAR_10->init_lock);
 return VAR_11;
}
