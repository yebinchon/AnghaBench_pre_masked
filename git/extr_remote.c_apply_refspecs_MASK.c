
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* src; char* dst; } ;
struct refspec {int dummy; } ;


 int FUNC_0 (struct refspec_item*,int ,int) ;
 scalar_t__ FUNC_1 (struct refspec*,struct refspec_item*) ;

char *FUNC_2(struct refspec *VAR_0, const char *VAR_1)
{
 struct refspec_item VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(struct refspec_item));
 VAR_2.src = (char *)VAR_1;

 if (FUNC_1(VAR_0, &VAR_2))
  return ((void*)0);

 return VAR_2.dst;
}
