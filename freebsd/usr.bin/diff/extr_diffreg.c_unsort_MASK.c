
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {size_t serial; int value; } ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(struct line *VAR_0, int VAR_1, int *VAR_2)
{
 int *VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1 + 1, sizeof(*VAR_3));
 for (VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++)
  VAR_3[VAR_0[VAR_4].serial] = VAR_0[VAR_4].value;
 for (VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++)
  VAR_2[VAR_4] = VAR_3[VAR_4];
 FUNC_0(VAR_3);
}
