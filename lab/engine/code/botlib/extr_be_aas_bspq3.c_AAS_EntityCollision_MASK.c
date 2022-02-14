
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_7__ {scalar_t__ fraction; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_8__ {int (* EntityTrace ) (TYPE_1__*,int ,int ,int ,int ,int,int) ;} ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int,int) ;

qboolean FUNC_2(int VAR_3,
     vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6, vec3_t VAR_7,
        int VAR_8, bsp_trace_t *VAR_9)
{
 bsp_trace_t VAR_10;

 VAR_0.EntityTrace(&VAR_10, VAR_4, VAR_5, VAR_6, VAR_7, VAR_3, VAR_8);
 if (VAR_10.fraction < VAR_9->fraction)
 {
  FUNC_0(VAR_9, &VAR_10, sizeof(bsp_trace_t));
  return VAR_2;
 }
 return VAR_1;
}
