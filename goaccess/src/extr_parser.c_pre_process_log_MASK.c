
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int is_404; int is_static; int resp_size; int uniq_key; int req; int * agent; } ;
typedef TYPE_1__ GLogItem ;
typedef int GLog ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_15 (GLog * VAR_2, char *VAR_3, int VAR_4)
{
  GLogItem *VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 0;


  if (FUNC_13 (VAR_3))
    return -1;

  FUNC_2 (VAR_2);
  VAR_5 = FUNC_8 (VAR_2);

  if (FUNC_11 (VAR_5, VAR_3) || FUNC_14 (VAR_5)) {
    VAR_6 = 1;
    FUNC_1 (VAR_2, VAR_3);
    goto cleanup;
  }


  if (VAR_5->agent == ((void*)0))
    VAR_5->agent = FUNC_0 ("-");


  if (VAR_4)
    goto cleanup;

  VAR_7 = FUNC_6 (VAR_2, VAR_5);

  if (VAR_7 == VAR_0)
    goto cleanup;

  if (FUNC_9 (VAR_5))
    VAR_5->is_404 = 1;
  else if (FUNC_10 (VAR_5->req))
    VAR_5->is_static = 1;

  VAR_5->uniq_key = FUNC_5 (VAR_5);

  FUNC_7 (VAR_2, VAR_5->resp_size);
  FUNC_12 (VAR_5);


  if (VAR_7 != VAR_1)
    FUNC_3 (VAR_2);

cleanup:
  FUNC_4 (VAR_5);

  return VAR_6;
}
