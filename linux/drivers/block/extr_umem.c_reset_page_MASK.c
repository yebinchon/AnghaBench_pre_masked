
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_page {int * bio; int ** biotail; scalar_t__ headcnt; scalar_t__ cnt; } ;



__attribute__((used)) static inline void FUNC_0(struct mm_page *VAR_0)
{
 VAR_0->cnt = 0;
 VAR_0->headcnt = 0;
 VAR_0->bio = ((void*)0);
 VAR_0->biotail = &VAR_0->bio;
}
