
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip_data {scalar_t__ slave; int name; } ;


 int FUNC_0 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1,
     void *VAR_2)
{
 struct slip_data *VAR_3 = VAR_2;

 if (VAR_3->slave < 0)
  return;
 FUNC_0(VAR_0, VAR_1, VAR_3->name);
}
