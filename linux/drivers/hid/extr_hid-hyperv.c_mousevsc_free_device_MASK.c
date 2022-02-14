
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousevsc_dev {int device; struct mousevsc_dev* report_desc; struct mousevsc_dev* hid_desc; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mousevsc_dev*) ;

__attribute__((used)) static void FUNC_2(struct mousevsc_dev *VAR_0)
{
 FUNC_1(VAR_0->hid_desc);
 FUNC_1(VAR_0->report_desc);
 FUNC_0(VAR_0->device, ((void*)0));
 FUNC_1(VAR_0);
}
