
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, irq_handler_t VAR_4,
    void *VAR_5)
{
 return FUNC_1(FUNC_0(VAR_2), VAR_4,
 VAR_0 | VAR_1, "sdhc1-card-detect", VAR_5);
}
