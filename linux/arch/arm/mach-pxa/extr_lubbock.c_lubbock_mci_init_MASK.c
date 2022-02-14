
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,void*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_6,
  irq_handler_t VAR_7,
  void *VAR_8)
{

 VAR_3 = VAR_7;
 VAR_4 = VAR_8;
 FUNC_1(&VAR_5, VAR_2, 0);
 return FUNC_0(VAR_0, VAR_1,
      0, "lubbock-sd-detect", VAR_8);
}
