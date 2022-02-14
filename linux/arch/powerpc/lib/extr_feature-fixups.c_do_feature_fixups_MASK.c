
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {int alt_end_off; int alt_start_off; int end_off; int start_off; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fixup_entry*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,struct fixup_entry*) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;

void FUNC_4(unsigned long VAR_0, void *VAR_1, void *VAR_2)
{
 struct fixup_entry *VAR_3, *VAR_4;

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;

 for (; VAR_3 < VAR_4; VAR_3++) {
  if (FUNC_2(VAR_0, VAR_3)) {
   FUNC_0(1);
   FUNC_3("Unable to patch feature section at %p - %p" " with %p - %p\n",

    FUNC_1(VAR_3, VAR_3->start_off),
    FUNC_1(VAR_3, VAR_3->end_off),
    FUNC_1(VAR_3, VAR_3->alt_start_off),
    FUNC_1(VAR_3, VAR_3->alt_end_off));
  }
 }
}
