
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ type; } ;


 int FUNC_0 (struct option*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct option*,struct option const*,int) ;
 int FUNC_2 (struct option*,int ,int) ;

struct option *FUNC_3(const struct option *VAR_1)
{
 struct option *VAR_2;
 int VAR_3 = 0;

 while (VAR_1 && VAR_1->type != VAR_0) {
  VAR_3++;
  VAR_1++;
 }

 FUNC_0(VAR_2, VAR_3 + 1);
 FUNC_1(VAR_2, VAR_1 - VAR_3, sizeof(*VAR_1) * VAR_3);
 FUNC_2(VAR_2 + VAR_3, 0, sizeof(*VAR_2));
 VAR_2[VAR_3].type = VAR_0;
 return VAR_2;
}
