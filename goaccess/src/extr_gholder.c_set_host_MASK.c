
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int idx; } ;
struct TYPE_7__ {int (* holder_callback ) (TYPE_2__*) ;} ;
typedef int GRawDataItem ;
typedef TYPE_1__ GPanel ;
typedef TYPE_2__ GHolder ;


 int FUNC_0 (int ,TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (GRawDataItem VAR_0, GHolder * VAR_1, const GPanel * VAR_2, char *VAR_3,
          int VAR_4)
{
  FUNC_0 (VAR_0, VAR_1, FUNC_2 (VAR_3), VAR_4);
  if (VAR_2->holder_callback)
    VAR_2->holder_callback (VAR_1);
  VAR_1->idx++;
}
