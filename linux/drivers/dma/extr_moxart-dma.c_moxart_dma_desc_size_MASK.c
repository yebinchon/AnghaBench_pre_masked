
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moxart_desc {unsigned int sglen; TYPE_1__* sg; } ;
struct TYPE_2__ {scalar_t__ len; } ;



__attribute__((used)) static size_t FUNC_0(struct moxart_desc *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2;
 size_t VAR_3;

 for (VAR_3 = VAR_2 = VAR_1; VAR_2 < VAR_0->sglen; VAR_2++)
  VAR_3 += VAR_0->sg[VAR_2].len;

 return VAR_3;
}
