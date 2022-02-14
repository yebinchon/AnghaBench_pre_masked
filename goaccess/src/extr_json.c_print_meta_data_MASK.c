
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ json_pretty_print; } ;
struct TYPE_4__ {int ht_size; int module; } ;
typedef int GJSON ;
typedef TYPE_1__ GHolder ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_9 (GJSON * VAR_1, GHolder * VAR_2, int VAR_3)
{
  int VAR_4 = 0, VAR_5 = 0;

  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1, VAR_5 = VAR_3 + 2;

  FUNC_8 (VAR_1, "metadata", VAR_4);

  FUNC_1 (VAR_1, VAR_2->module, VAR_5);
  FUNC_3 (VAR_1, VAR_2->module, VAR_5);
  FUNC_5 (VAR_1, VAR_2->module, VAR_5);
  FUNC_2 (VAR_1, VAR_2->module, VAR_5);
  FUNC_7 (VAR_1, VAR_2->module, VAR_5);
  FUNC_4 (VAR_1, VAR_2->module, VAR_5);
  FUNC_6 (VAR_1, VAR_2->ht_size, VAR_5);

  FUNC_0 (VAR_1, VAR_4, 0);
}
