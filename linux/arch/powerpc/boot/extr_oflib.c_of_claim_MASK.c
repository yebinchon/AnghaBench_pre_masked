
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prom_arg_t ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (char*,int,int,int*,char*,int ,unsigned long,unsigned long,unsigned long) ;

unsigned int FUNC_3(unsigned long VAR_3, unsigned long VAR_4,
        unsigned long VAR_5)
{
 int VAR_6;
 prom_arg_t VAR_7;

 if (VAR_2 < 0)
  VAR_2 = FUNC_0();
 if (VAR_5 || !VAR_2)
  return FUNC_1("claim", 3, 1, VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_2("call-method", 5, 2, &VAR_7, "claim", VAR_1,
          VAR_5, VAR_4, VAR_3);
 if (VAR_6 != 0 || VAR_7 == -1)
  return -1;
 VAR_6 = FUNC_2("call-method", 5, 2, &VAR_7, "claim", VAR_0,
          VAR_5, VAR_4, VAR_3);

 VAR_6 = FUNC_1("call-method", 6, 1, "map", VAR_0,
      0x12, VAR_4, VAR_3, VAR_3);
 return VAR_3;
}
