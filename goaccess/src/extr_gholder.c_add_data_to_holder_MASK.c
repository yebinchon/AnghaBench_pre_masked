
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int idx; int module; } ;
struct TYPE_7__ {int (* holder_callback ) (TYPE_2__*) ;} ;
typedef int GRawDataType ;
typedef int GRawDataItem ;
typedef TYPE_1__ GPanel ;
typedef TYPE_2__ GHolder ;


 int FUNC_0 (int ,int ,int ,char**,int*) ;
 int FUNC_1 (int ,TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3 (GRawDataItem VAR_0, GHolder * VAR_1, GRawDataType VAR_2,
                    const GPanel * VAR_3)
{
  char *VAR_4 = ((void*)0);
  int VAR_5 = 0;

  if (FUNC_0 (VAR_1->module, VAR_0, VAR_2, &VAR_4, &VAR_5) == 1)
    return;

  FUNC_1 (VAR_0, VAR_1, VAR_4, VAR_5);
  if (VAR_3->holder_callback)
    VAR_3->holder_callback (VAR_1);

  VAR_1->idx++;
}
