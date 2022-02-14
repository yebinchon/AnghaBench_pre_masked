
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct topa {int dummy; } ;
struct pt_buffer {unsigned long nr_pages; int last; int first; } ;
typedef int gfp_t ;
struct TYPE_2__ {int end; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pt_buffer*) ;
 int FUNC_3 (struct pt_buffer*) ;
 struct topa* FUNC_4 (int,int ) ;
 int FUNC_5 (struct pt_buffer*,int,int ) ;
 int FUNC_6 (struct pt_buffer*,struct topa*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct pt_buffer *VAR_2, int VAR_3,
          unsigned long VAR_4, gfp_t VAR_5)
{
 struct topa *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(VAR_2, VAR_6);

 while (VAR_2->nr_pages < VAR_4) {
  VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_5);
  if (VAR_7) {
   FUNC_2(VAR_2);
   return -VAR_0;
  }
 }


 if (FUNC_1(VAR_1)) {
  FUNC_0(VAR_2->last, -1)->base = FUNC_7(VAR_2->first);
  FUNC_0(VAR_2->last, -1)->end = 1;
 }

 FUNC_3(VAR_2);
 return 0;
}
