
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu {int number; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct spu*,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_1, unsigned long VAR_2,
    void *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct spu *VAR_6 = VAR_3;

 FUNC_0("SPU event notification arrived\n");
 if (!VAR_2) {
  FUNC_3(&VAR_0, VAR_5);
  VAR_4 = FUNC_2(VAR_6->number);
  FUNC_4(&VAR_0, VAR_5);
 } else {
  VAR_4 = FUNC_1(VAR_6, VAR_2);
 }
 return VAR_4;
}
