
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct obj* next; } ;
struct TYPE_4__ {TYPE_1__ seg; } ;
struct obj {int oid; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct obj* FUNC_0 (int,int ) ;

int
FUNC_1(int VAR_3, int VAR_4)
{
 struct obj *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 == ((void*)0))
  return (-1);

 VAR_5 = VAR_5->u.seg.next;
 if (VAR_5 == ((void*)0)) {
  VAR_2 = VAR_0;
  return (-1);
 }
 return (VAR_5->oid);
}
