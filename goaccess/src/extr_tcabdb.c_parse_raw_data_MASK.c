
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ type; int idx; } ;
typedef scalar_t__ GRawDataType ;
typedef TYPE_1__ GRawData ;
typedef int GModule ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (void*,int ,TYPE_1__*) ;

GRawData *
FUNC_6 (GModule VAR_5)
{
  GRawData *VAR_6;
  GRawDataType VAR_7;
  uint32_t VAR_8 = 0;
  void *VAR_9 = ((void*)0);

  switch (VAR_5) {
  case 128:
    VAR_9 = FUNC_0 (VAR_5, VAR_1);
    VAR_7 = VAR_3;
    break;
  default:
    VAR_9 = FUNC_0 (VAR_5, VAR_2);
    VAR_7 = VAR_0;
  }

  if (!VAR_9)
    return ((void*)0);

  VAR_8 = FUNC_1 (VAR_9);
  VAR_6 = FUNC_2 (VAR_5, VAR_8);
  VAR_6->type = VAR_7;

  FUNC_5 (VAR_9, VAR_4, VAR_6);
  if (VAR_6->type == VAR_3) {
    FUNC_4 (VAR_6, VAR_6->idx);
  } else {
    FUNC_3 (VAR_6, VAR_6->idx);
  }

  return VAR_6;
}
