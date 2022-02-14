
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct imsgev {int ibuf; } ;
typedef int pid_t ;


 int FUNC_0 (int *,int ,int ,int ,int,void*,int ) ;
 int FUNC_1 (struct imsgev*) ;

int
FUNC_2(struct imsgev *VAR_0, u_int16_t VAR_1, u_int32_t VAR_2,
    pid_t VAR_3, int VAR_4, void *VAR_5, u_int16_t VAR_6)
{
 int VAR_7;

 if ((VAR_7 = FUNC_0(&VAR_0->ibuf, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6)) != -1)
  FUNC_1(VAR_0);
 return (VAR_7);
}
