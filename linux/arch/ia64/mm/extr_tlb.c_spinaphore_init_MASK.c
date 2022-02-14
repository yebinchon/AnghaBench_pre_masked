
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spinaphore {int serve; scalar_t__ ticket; } ;



__attribute__((used)) static inline void FUNC_0(struct spinaphore *VAR_0, int VAR_1)
{
 VAR_0->ticket = 0;
 VAR_0->serve = VAR_1;
}
