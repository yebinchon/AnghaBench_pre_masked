
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float fraction; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_5__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,float const*,int *,int *,float const*,int ,int ,int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

float FUNC_1(const float VAR_5[3], const float VAR_6[3]) {
 if ( VAR_4.state != VAR_2 ) {
  return 0.0f;
 }
 trace_t VAR_7;
 FUNC_0(&VAR_7, VAR_5, ((void*)0), ((void*)0), VAR_6, VAR_1, VAR_0, VAR_3);
 return VAR_7.fraction;
}
