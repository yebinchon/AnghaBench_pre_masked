
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_3__ {int fraction; } ;
typedef TYPE_1__ bsp_trace_t ;


 TYPE_1__ FUNC_0 (int ,int *,int *,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(int VAR_4, vec3_t VAR_5, vec3_t VAR_6)
{
 bsp_trace_t VAR_7;

 VAR_7 = FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_6, VAR_4, VAR_1|VAR_0);
 if (VAR_7.fraction >= 1) return VAR_3;
 return VAR_2;
}
