
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* Tree ;
struct TYPE_9__ {int op; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 TYPE_4__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_10 ;

Tree FUNC_4(Tree VAR_11) {
 int VAR_12 = FUNC_2(FUNC_3(VAR_11)->op);

 if (VAR_11->type != VAR_10
 && (VAR_12==VAR_0 || VAR_12==VAR_8 || VAR_12==VAR_7 || VAR_12==VAR_1 || VAR_12==VAR_6
 || VAR_12== VAR_4 || VAR_12==VAR_5 || VAR_12== VAR_2 || VAR_12==VAR_3))
  VAR_11 = FUNC_0(VAR_11, FUNC_1(1, VAR_9),
   FUNC_1(0, VAR_9));
 return VAR_11;
}
