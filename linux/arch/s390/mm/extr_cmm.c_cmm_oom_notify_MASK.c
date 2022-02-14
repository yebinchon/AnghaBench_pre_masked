
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (long,void**,int *) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_7,
     unsigned long VAR_8, void *VAR_9)
{
 unsigned long *VAR_10 = VAR_9;
 long VAR_11 = 256;

 VAR_11 = FUNC_0(VAR_11, &VAR_5, &VAR_4);
 if (VAR_11 > 0)
  VAR_11 = FUNC_0(VAR_11, &VAR_2, &VAR_1);
 VAR_3 = VAR_2;
 VAR_6 = VAR_5;
 *VAR_10 += 256 - VAR_11;
 return VAR_0;
}
