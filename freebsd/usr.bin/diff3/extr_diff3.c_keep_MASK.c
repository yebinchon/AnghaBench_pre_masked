
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {scalar_t__ to; scalar_t__ from; } ;


 int FUNC_0 (int,struct range*,int) ;
 int* VAR_0 ;

__attribute__((used)) static void
FUNC_1(int VAR_1, struct range *VAR_2)
{
 int VAR_3;
 struct range VAR_4;

 VAR_3 = VAR_0[3] - VAR_0[VAR_1];
 VAR_4.from = VAR_2->from - VAR_3;
 VAR_4.to = VAR_2->to - VAR_3;
 FUNC_0(VAR_1, &VAR_4, 1);
}
