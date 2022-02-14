
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; } ;
typedef TYPE_1__ searchy_query_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;

__attribute__((used)) static void FUNC_1 (searchy_query_t *VAR_1) {
  FUNC_0 (VAR_1->error, sizeof (VAR_1->error), "query contains too many words, SEARCHY_MAX_QUERY_WORDS is %d.", VAR_0);
}
