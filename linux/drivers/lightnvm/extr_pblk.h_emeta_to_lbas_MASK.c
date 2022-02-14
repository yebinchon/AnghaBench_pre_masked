
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* emeta_len; } ;
struct pblk {TYPE_1__ lm; } ;
struct line_emeta {int dummy; } ;



__attribute__((used)) static inline void *FUNC_0(struct pblk *VAR_0, struct line_emeta *VAR_1)
{
 return ((void *)VAR_1 + VAR_0->lm.emeta_len[1]);
}
