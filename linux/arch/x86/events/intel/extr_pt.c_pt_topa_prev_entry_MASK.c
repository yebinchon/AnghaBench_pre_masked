
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topa {int last; } ;
struct topa_page {struct topa_entry* table; struct topa topa; } ;
struct topa_entry {int dummy; } ;
struct pt_buffer {struct topa* last; struct topa* first; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct topa* FUNC_0 (struct topa*,int ) ;
 struct topa_page* FUNC_1 (struct topa*) ;

__attribute__((used)) static struct topa_entry *
FUNC_2(struct pt_buffer *VAR_2, struct topa_entry *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_3 & ~(VAR_0 - 1);
 struct topa_page *VAR_5;
 struct topa *VAR_6;

 VAR_5 = (struct topa_page *)VAR_4;
 if (VAR_5->table != VAR_3)
  return --VAR_3;

 VAR_6 = &VAR_5->topa;
 if (VAR_6 == VAR_2->first)
  VAR_6 = VAR_2->last;
 else
  VAR_6 = FUNC_0(VAR_6, VAR_1);

 VAR_5 = FUNC_1(VAR_6);

 return &VAR_5->table[VAR_6->last - 1];
}
