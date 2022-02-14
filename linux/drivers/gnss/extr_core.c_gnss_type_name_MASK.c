
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnss_device {size_t type; int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*) ;
 char** VAR_1 ;

__attribute__((used)) static const char *FUNC_1(struct gnss_device *VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_2->type < VAR_0)
  VAR_3 = VAR_1[VAR_2->type];

 if (!VAR_3)
  FUNC_0(&VAR_2->dev, "type name not defined\n");

 return VAR_3;
}
