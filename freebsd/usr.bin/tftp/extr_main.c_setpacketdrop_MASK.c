
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, char *VAR_2[])
{

 if (VAR_1 != 1)
  VAR_0 = FUNC_0(VAR_2[1]);

 FUNC_1("Randomly %d in 100 packets will be dropped\n",
     VAR_0);
}
