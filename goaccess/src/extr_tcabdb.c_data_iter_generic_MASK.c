
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef int TCADB ;
typedef TYPE_1__ GRawData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,void*,TYPE_1__*) ;
 void* FUNC_2 (int *,void*,int,int*) ;

__attribute__((used)) static void
FUNC_3 (TCADB * VAR_1, void *VAR_2, int VAR_3, void *VAR_4)
{
  GRawData *VAR_5 = VAR_4;
  void *VAR_6;
  int VAR_7 = 0;

  VAR_6 = FUNC_2 (VAR_1, VAR_2, VAR_3, &VAR_7);
  if (VAR_6) {
    FUNC_1 (VAR_2, VAR_6, VAR_5);
    if (VAR_5->type != VAR_0)
      FUNC_0 (VAR_6);
  }
}
