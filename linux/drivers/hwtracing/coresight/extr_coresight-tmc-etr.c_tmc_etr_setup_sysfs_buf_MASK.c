
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int size; } ;
struct etr_buf {int dummy; } ;


 int FUNC_0 (int ) ;
 struct etr_buf* FUNC_1 (struct tmc_drvdata*,int ,int ,int ,int *) ;

__attribute__((used)) static struct etr_buf *
FUNC_2(struct tmc_drvdata *VAR_0)
{
 return FUNC_1(VAR_0, VAR_0->size,
     0, FUNC_0(0), ((void*)0));
}
