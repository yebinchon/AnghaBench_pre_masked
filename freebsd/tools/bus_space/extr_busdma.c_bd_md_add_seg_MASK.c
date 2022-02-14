
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u_long ;
struct TYPE_5__ {int* nsegs; struct obj** seg; } ;
struct TYPE_4__ {void* size; void* address; } ;
struct TYPE_6__ {TYPE_2__ md; TYPE_1__ seg; } ;
struct obj {int refcnt; TYPE_3__ u; struct obj* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct obj* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct obj *VAR_2, int VAR_3, u_long VAR_4, u_long VAR_5)
{
 struct obj *VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_6->refcnt = 1;
 VAR_6->parent = VAR_2;
 VAR_6->u.seg.address = VAR_4;
 VAR_6->u.seg.size = VAR_5;

 VAR_2->u.md.seg[VAR_3] = VAR_6;
 VAR_2->u.md.nsegs[VAR_3] = 1;
 return (0);
}
