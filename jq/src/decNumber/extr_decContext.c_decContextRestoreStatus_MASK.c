
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_4__ {int status; } ;
typedef TYPE_1__ decContext ;



decContext *FUNC_0(decContext *VAR_0,
                                    uInt VAR_1, uInt VAR_2) {
  VAR_0->status&=~VAR_2;
  VAR_0->status|=(VAR_2&VAR_1);
  return VAR_0;
  }
