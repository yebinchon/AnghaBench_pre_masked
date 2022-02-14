
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ type; } ;


 int FUNC_0 (struct option*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (size_t,size_t,int) ;

struct option *FUNC_2(struct option *VAR_1, struct option *VAR_2)
{
 struct option *VAR_3;
 size_t VAR_4, VAR_5 = 0, VAR_6 = 0;

 for (VAR_4 = 0; VAR_1[VAR_4].type != VAR_0; VAR_4++)
  VAR_5++;
 for (VAR_4 = 0; VAR_2[VAR_4].type != VAR_0; VAR_4++)
  VAR_6++;

 FUNC_0(VAR_3, FUNC_1(VAR_5, VAR_6, 1));
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_3[VAR_4] = VAR_1[VAR_4];
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  VAR_3[VAR_5 + VAR_4] = VAR_2[VAR_4];
 VAR_3[VAR_5 + VAR_6] = VAR_2[VAR_6];

 return VAR_3;
}
