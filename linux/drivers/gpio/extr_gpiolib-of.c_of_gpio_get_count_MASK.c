
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
typedef int propname ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,char const*,...) ;

int FUNC_3(struct device *VAR_2, const char *VAR_3)
{
 int VAR_4;
 char VAR_5[32];
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_3)
   FUNC_2(VAR_5, sizeof(VAR_5), "%s-%s",
     VAR_3, VAR_1[VAR_6]);
  else
   FUNC_2(VAR_5, sizeof(VAR_5), "%s",
     VAR_1[VAR_6]);

  VAR_4 = FUNC_1(VAR_2->of_node, VAR_5);
  if (VAR_4 > 0)
   break;
 }
 return VAR_4 ? VAR_4 : -VAR_0;
}
