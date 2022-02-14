
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,unsigned long,void*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 static int VAR_4 = 0;

 if (VAR_4 == 0) {
  char VAR_5[64];
  FUNC_2(VAR_5, 64, "/dev/%s", VAR_1);

  if ((VAR_4 = FUNC_1(VAR_5, VAR_0)) < 0)
   return -1;
 }

 return FUNC_0(VAR_4, VAR_2, VAR_3) < 0 ? -1 : 0;
}
