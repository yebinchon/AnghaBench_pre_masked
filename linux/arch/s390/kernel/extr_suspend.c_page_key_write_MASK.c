
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {unsigned char* data; struct TYPE_2__* next; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (struct page*,int ) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (unsigned long,unsigned char,int ) ;
 struct page* FUNC_3 (void*) ;

void FUNC_4(void *VAR_3)
{
 struct page *VAR_4;
 unsigned char VAR_5;

 VAR_5 = VAR_1->data[VAR_2];
 FUNC_2((unsigned long) VAR_3, VAR_5 & 0x7f, 0);
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_5 & 0x80)
  FUNC_1(VAR_4, 0);
 else
  FUNC_0(VAR_4, 0);
 if (++VAR_2 >= VAR_0)
  return;
 VAR_1 = VAR_1->next;
 VAR_2 = 0;
}
