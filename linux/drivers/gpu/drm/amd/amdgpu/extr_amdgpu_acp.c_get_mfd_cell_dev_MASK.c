
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int auto_dev_name ;


 struct device* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct device*,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*,char const*,int) ;

__attribute__((used)) static struct device *FUNC_3(const char *VAR_1, int VAR_2)
{
 char VAR_3[25];
 struct device *VAR_4;

 FUNC_2(VAR_3, sizeof(VAR_3),
   "%s.%d.auto", VAR_1, VAR_2);
 VAR_4 = FUNC_0(&VAR_0, ((void*)0), VAR_3);
 FUNC_1(VAR_4, "device %s added to pm domain\n", VAR_3);

 return VAR_4;
}
