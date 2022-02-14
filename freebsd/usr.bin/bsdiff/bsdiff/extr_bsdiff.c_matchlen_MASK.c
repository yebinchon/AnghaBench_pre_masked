
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef size_t off_t ;



__attribute__((used)) static off_t FUNC_0(u_char *VAR_0,off_t VAR_1,u_char *VAR_2,off_t VAR_3)
{
 off_t VAR_4;

 for(VAR_4=0;(VAR_4<VAR_1)&&(VAR_4<VAR_3);VAR_4++)
  if(VAR_0[VAR_4]!=VAR_2[VAR_4]) break;

 return VAR_4;
}
