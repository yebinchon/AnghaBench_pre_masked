
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_usb {int sw_debounce_jiffies; int wq_detectid; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct palmas_usb *VAR_4 = VAR_3;

 FUNC_0(VAR_1, &VAR_4->wq_detectid,
      VAR_4->sw_debounce_jiffies);

 return VAR_0;
}
