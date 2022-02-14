
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 void* FUNC_3 (int *,scalar_t__,int,int ,int,int ) ;
 int FUNC_4 (char const*,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_4, void **VAR_5, size_t *VAR_6, int VAR_7)
{
 off_t VAR_8;

 int VAR_9 = FUNC_4(VAR_4, VAR_2);
 if (VAR_9 == -1)
  FUNC_1(1, "%s", VAR_4);

 VAR_8 = FUNC_2(VAR_9, 0, VAR_3);
 if (VAR_8 == (off_t)-1)
  FUNC_1(1, "lseek");
 *VAR_6 = (size_t)VAR_8;

 *VAR_5 = FUNC_3(((void*)0), VAR_8, VAR_7, VAR_1, VAR_9, 0);
 if (*VAR_5 == VAR_0)
  FUNC_1(1, "mmap");

 FUNC_0(VAR_9);
}
