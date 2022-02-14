
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
  irq_handler_t VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_0(VAR_1), VAR_3,
     VAR_0, "mmc-detect", VAR_4);
 return VAR_5;
}
