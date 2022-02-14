
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int * Tree ;
struct TYPE_15__ {scalar_t__ points; } ;
struct TYPE_13__ {int y; int x; int file; } ;
struct TYPE_11__ {TYPE_3__ src; int point; } ;
struct TYPE_12__ {TYPE_1__ point; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_3__ Coordinate ;
typedef TYPE_4__* Code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_3__*,int **) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_7__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 float VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 float VAR_7 ;
 TYPE_3__ VAR_8 ;

void FUNC_6(Coordinate *VAR_9) {
 Code VAR_10 = FUNC_1(VAR_0);

 VAR_10->u.point.src = VAR_9 ? *VAR_9 : VAR_8;
 VAR_10->u.point.point = VAR_6;
 if (VAR_5 > 0) {
  int VAR_11 = FUNC_2(VAR_10->u.point.src.file,
   VAR_10->u.point.src.x, VAR_10->u.point.src.y);
  if (VAR_11 > 0)
   VAR_7 = (float)VAR_11/VAR_5;
 }
 if (VAR_3 > 2) FUNC_4(VAR_4, &VAR_10->u.point.src);
 if (VAR_2.points && FUNC_5(VAR_1))
  {
   Tree VAR_12 = ((void*)0);
   FUNC_0(VAR_2.points, &VAR_10->u.point.src, &VAR_12);
   if (VAR_12)
    FUNC_3(VAR_12, 0, 0);
  }
}
