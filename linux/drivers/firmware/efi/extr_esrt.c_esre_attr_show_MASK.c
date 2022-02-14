
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct esre_entry {int dummy; } ;
struct esre_attribute {int (* show ) (struct esre_entry*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct esre_entry*,char*) ;
 struct esre_attribute* FUNC_2 (struct attribute*) ;
 struct esre_entry* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_2,
         struct attribute *VAR_3, char *VAR_4)
{
 struct esre_entry *VAR_5 = FUNC_3(VAR_2);
 struct esre_attribute *VAR_6 = FUNC_2(VAR_3);


 if (!FUNC_0(VAR_0))
  return -VAR_1;

 return VAR_6->show(VAR_5, VAR_4);
}
