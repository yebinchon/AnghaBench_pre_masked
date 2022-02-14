
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx24110_state {int dummy; } ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24110_state*,int) ;

__attribute__((used)) static enum fe_code_rate FUNC_1(struct cx24110_state *VAR_2)
{
 int VAR_3;

 VAR_3=FUNC_0(VAR_2,0x22)&0x0f;
 if(!(VAR_3&0x08)) {
  return VAR_0 + VAR_3 - 1;
 } else {




    return VAR_1;
 }
}
