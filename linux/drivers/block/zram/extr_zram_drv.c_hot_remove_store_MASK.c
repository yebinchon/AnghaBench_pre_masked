
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int dummy; } ;
struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct zram* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct zram*) ;

__attribute__((used)) static ssize_t FUNC_6(struct class *VAR_4,
   struct class_attribute *VAR_5,
   const char *VAR_6,
   size_t VAR_7)
{
 struct zram *VAR_8;
 int VAR_9, VAR_10;


 VAR_9 = FUNC_2(VAR_6, 10, &VAR_10);
 if (VAR_9)
  return VAR_9;
 if (VAR_10 < 0)
  return -VAR_0;

 FUNC_3(&VAR_3);

 VAR_8 = FUNC_0(&VAR_2, VAR_10);
 if (VAR_8) {
  VAR_9 = FUNC_5(VAR_8);
  if (!VAR_9)
   FUNC_1(&VAR_2, VAR_10);
 } else {
  VAR_9 = -VAR_1;
 }

 FUNC_4(&VAR_3);
 return VAR_9 ? VAR_9 : VAR_7;
}
