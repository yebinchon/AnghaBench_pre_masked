
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip_proto {int obuf; } ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (void*,int ,int) ;

int FUNC_2(int VAR_0, void *VAR_1, int VAR_2, struct slip_proto *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_3->obuf, VAR_2);
 VAR_5 = FUNC_0(VAR_0, VAR_3->obuf, VAR_4);
 if(VAR_5 < 0)
  return VAR_5;
 else return VAR_2;
}
