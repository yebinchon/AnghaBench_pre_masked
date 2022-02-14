
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct ar7240sw {int* pvid; } ;


 struct ar7240sw* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_0, int VAR_1, int *VAR_2)
{
 struct ar7240sw *VAR_3 = FUNC_0(VAR_0);
 *VAR_2 = VAR_3->pvid[VAR_1];
 return 0;
}
