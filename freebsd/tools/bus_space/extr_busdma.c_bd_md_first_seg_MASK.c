
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct obj** seg; } ;
struct TYPE_4__ {TYPE_1__ md; } ;
struct obj {int oid; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct obj* FUNC_0 (int,int ) ;

int
FUNC_1(int VAR_7, int VAR_8)
{
 struct obj *VAR_9, *VAR_10;

 VAR_9 = FUNC_0(VAR_7, VAR_5);
 if (VAR_9 == ((void*)0))
  return (-1);

 if (VAR_8 != VAR_0 && VAR_8 != VAR_1 &&
     VAR_8 != VAR_2) {
  VAR_6 = VAR_3;
  return (-1);
 }
 VAR_10 = VAR_9->u.md.seg[VAR_8];
 if (VAR_10 == ((void*)0)) {
  VAR_6 = VAR_4;
  return (-1);
 }
 return (VAR_10->oid);
}
