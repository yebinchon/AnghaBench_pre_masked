
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseries_hp_errorlog {int dummy; } ;
struct class_attribute {int dummy; } ;
struct class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,struct pseries_hp_errorlog*) ;
 int FUNC_1 (char**,struct pseries_hp_errorlog*) ;
 int FUNC_2 (char**,struct pseries_hp_errorlog*) ;
 int FUNC_3 (struct pseries_hp_errorlog*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static ssize_t FUNC_8(struct class *VAR_2, struct class_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct pseries_hp_errorlog VAR_6;
 char *VAR_7;
 char *VAR_8;
 int VAR_9;

 VAR_8 = VAR_7 = FUNC_5(VAR_4, VAR_1);
 if (!VAR_7) {
  FUNC_7("Could not allocate resources for DLPAR operation\n");
  FUNC_4(VAR_7);
  return -VAR_0;
 }





 VAR_9 = FUNC_2(&VAR_8, &VAR_6);
 if (VAR_9)
  goto dlpar_store_out;

 VAR_9 = FUNC_0(&VAR_8, &VAR_6);
 if (VAR_9)
  goto dlpar_store_out;

 VAR_9 = FUNC_1(&VAR_8, &VAR_6);
 if (VAR_9)
  goto dlpar_store_out;

 VAR_9 = FUNC_3(&VAR_6);

dlpar_store_out:
 FUNC_4(VAR_7);

 if (VAR_9)
  FUNC_6("Could not handle DLPAR request \"%s\"\n", VAR_4);

 return VAR_9 ? VAR_9 : VAR_5;
}
