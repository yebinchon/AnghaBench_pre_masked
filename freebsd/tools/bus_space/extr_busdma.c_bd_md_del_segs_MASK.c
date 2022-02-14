
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct obj* next; int size; scalar_t__ address; } ;
struct TYPE_4__ {struct obj** seg; } ;
struct TYPE_6__ {TYPE_2__ seg; TYPE_1__ md; } ;
struct obj {TYPE_3__ u; } ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (struct obj*) ;

__attribute__((used)) static int
FUNC_2(struct obj *VAR_0, int VAR_1, int VAR_2)
{
 struct obj *VAR_3, *VAR_4;

 for (VAR_3 = VAR_0->u.md.seg[VAR_1]; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  if (VAR_2)
   FUNC_0((void *)VAR_3->u.seg.address, VAR_3->u.seg.size);
  VAR_4 = VAR_3->u.seg.next;
  FUNC_1(VAR_3);
 }
 return (0);
}
