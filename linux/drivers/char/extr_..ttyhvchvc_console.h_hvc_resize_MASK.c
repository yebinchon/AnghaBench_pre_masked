
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct hvc_struct {int lock; } ;


 int FUNC_0 (struct hvc_struct*,struct winsize) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct hvc_struct *VAR_0, struct winsize VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
}
