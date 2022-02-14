
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image {int nr; TYPE_1__* line; int len; int buf; } ;
struct TYPE_2__ {scalar_t__ len; } ;



__attribute__((used)) static void FUNC_0(struct image *VAR_0)
{
 VAR_0->buf += VAR_0->line[0].len;
 VAR_0->len -= VAR_0->line[0].len;
 VAR_0->line++;
 VAR_0->nr--;
}
