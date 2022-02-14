
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 long FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 long FUNC_2 (long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_5,
     unsigned long VAR_6, void *VAR_7)
{
 unsigned long *VAR_8 = VAR_7;
 long VAR_9 = FUNC_0(VAR_4);

 FUNC_1("OOM processing started\n");
 VAR_9 = FUNC_2(VAR_9);
 VAR_2 = VAR_1;
 *VAR_8 += FUNC_0(VAR_4) - VAR_9;
 VAR_3 += FUNC_0(VAR_4) - VAR_9;
 FUNC_1("OOM processing complete\n");
 return VAR_0;
}
