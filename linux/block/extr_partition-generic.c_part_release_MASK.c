
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int dummy; } ;
struct device {int devt; } ;


 int FUNC_0 (int ) ;
 struct hd_struct* FUNC_1 (struct device*) ;
 int FUNC_2 (struct hd_struct*) ;
 int FUNC_3 (struct hd_struct*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct hd_struct *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_0->devt);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
