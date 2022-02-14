
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, off_t VAR_3, u_int VAR_4)
{
 int VAR_5;

 if (FUNC_2(VAR_2, (off_t)VAR_3 * VAR_4, VAR_0) == -1)
  FUNC_0(1, "lseek");
 VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_4);
 if (VAR_5 == -1)
  FUNC_0(1, "read");
 if (VAR_5 != (int)VAR_4)
  FUNC_1(1, "disk too small for test.");
}
