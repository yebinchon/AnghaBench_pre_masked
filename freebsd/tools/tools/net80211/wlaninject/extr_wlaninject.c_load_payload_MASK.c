
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (int,void*,int) ;

int FUNC_5(char *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 if ((VAR_4 = FUNC_2(VAR_1, VAR_0)) == -1)
  FUNC_1(1, "open()");

 if ((VAR_5 = FUNC_4(VAR_4, VAR_2, VAR_3)) == -1)
  FUNC_1(1, "read()");

 FUNC_0(VAR_4);
 FUNC_3("Read %d bytes from %s\n", VAR_5, VAR_1);
 return VAR_5;
}
