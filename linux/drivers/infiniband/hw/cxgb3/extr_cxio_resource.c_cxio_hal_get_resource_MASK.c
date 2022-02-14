
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kfifo {int dummy; } ;
typedef int spinlock_t ;


 scalar_t__ FUNC_0 (struct kfifo*,unsigned char*,int,int *) ;

__attribute__((used)) static u32 FUNC_1(struct kfifo *VAR_0, spinlock_t * VAR_1)
{
 u32 VAR_2;
 if (FUNC_0(VAR_0, (unsigned char *) &VAR_2, sizeof(u32), VAR_1))
  return VAR_2;
 else
  return 0;
}
