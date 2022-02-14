
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_2;

 if (FUNC_3(FUNC_0(), VAR_0, &VAR_2) == -1)
  FUNC_1(1, "ioctl(CRIOGET)");
 if (FUNC_2(VAR_2, VAR_1, 1) == -1)
  FUNC_1(1, "fcntl(F_SETFD) (crget)");
 return VAR_2;
}
