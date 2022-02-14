
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectivity_progress {int count; int progress; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct connectivity_progress *VAR_0)
{
 VAR_0->count++;
 if ((VAR_0->count & 1023) == 0)
  FUNC_0(VAR_0->progress, VAR_0->count);
}
