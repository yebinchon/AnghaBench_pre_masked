
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * headnode; } ;
typedef TYPE_1__ tree_t ;
typedef int node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 char* VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,...) ;
 char* VAR_5 ;
 int FUNC_12 (char*,char*,char*) ;

void FUNC_13 (tree_t *VAR_6)
{
 char VAR_7[1024];
 node_t *VAR_8;

 FUNC_11 ("--- WritePortalFile ---\n");

 VAR_8 = VAR_6->headnode;
 VAR_2 = 0;
 VAR_3 = 0;

 FUNC_5 (VAR_8);

 FUNC_2 (VAR_6);

 FUNC_0 (VAR_8);



 FUNC_3 (VAR_8);


 FUNC_12 (VAR_7, "%s.prt", VAR_5);
 FUNC_10 ("writing %s\n", VAR_7);
 VAR_4 = FUNC_8 (VAR_7, "w");
 if (!VAR_4)
  FUNC_1 ("Error opening %s", VAR_7);

 FUNC_9 (VAR_4, "%s\n", VAR_0);
 FUNC_9 (VAR_4, "%i\n", VAR_2);
 FUNC_9 (VAR_4, "%i\n", VAR_3);

 FUNC_11 ("%5i visclusters\n", VAR_2);
 FUNC_11 ("%5i visportals\n", VAR_3);

 FUNC_6 (VAR_8);

 FUNC_7 (VAR_4);



 VAR_1 = 1;
 FUNC_4 (VAR_8);
}
