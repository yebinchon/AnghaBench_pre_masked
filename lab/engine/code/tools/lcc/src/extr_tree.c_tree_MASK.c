
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
typedef TYPE_1__* Tree ;
struct TYPE_6__ {int op; struct TYPE_6__** kids; int type; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;

Tree FUNC_1(int VAR_1, Type VAR_2, Tree VAR_3, Tree VAR_4) {
 Tree VAR_5;

 FUNC_0(VAR_5, VAR_0);
 VAR_5->op = VAR_1;
 VAR_5->type = VAR_2;
 VAR_5->kids[0] = VAR_3;
 VAR_5->kids[1] = VAR_4;
 return VAR_5;
}
