
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chan {char* dev; TYPE_1__* ops; } ;
struct TYPE_2__ {char* type; } ;


 int FUNC_0 (char*,int,int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct chan *VAR_0, char *VAR_1, int VAR_2,
      char **VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0 == ((void*)0)) {
  FUNC_0(VAR_1, VAR_2, VAR_4, "none", 1);
  return VAR_4;
 }

 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_0->ops->type, 0);

 if (VAR_0->dev == ((void*)0)) {
  FUNC_0(VAR_1, VAR_2, VAR_4, "", 1);
  return VAR_4;
 }

 FUNC_0(VAR_1, VAR_2, VAR_4, ":", 0);
 FUNC_0(VAR_1, VAR_2, VAR_4, VAR_0->dev, 0);

 return VAR_4;
}
