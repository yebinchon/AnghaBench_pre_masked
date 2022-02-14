
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct efivar_entry {int dummy; } ;
struct efivar_attribute {int (* store ) (struct efivar_entry*,char const*,size_t) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct efivar_entry*,char const*,size_t) ;
 struct efivar_attribute* FUNC_2 (struct attribute*) ;
 struct efivar_entry* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_3, struct attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct efivar_entry *VAR_7 = FUNC_3(VAR_3);
 struct efivar_attribute *VAR_8 = FUNC_2(VAR_4);
 ssize_t VAR_9 = -VAR_2;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_8->store)
  VAR_9 = VAR_8->store(VAR_7, VAR_5, VAR_6);

 return VAR_9;
}
