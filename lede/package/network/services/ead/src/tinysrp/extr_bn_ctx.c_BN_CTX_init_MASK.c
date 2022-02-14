
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bn; scalar_t__ too_many; scalar_t__ depth; scalar_t__ flags; scalar_t__ tos; } ;
typedef TYPE_1__ BN_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(BN_CTX *VAR_1)
 {
 int VAR_2;
 VAR_1->tos = 0;
 VAR_1->flags = 0;
 VAR_1->depth = 0;
 VAR_1->too_many = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&(VAR_1->bn[VAR_2]));
 }
