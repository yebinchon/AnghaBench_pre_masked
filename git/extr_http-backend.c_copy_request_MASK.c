
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int ,unsigned char**,scalar_t__) ;
 int FUNC_4 (int,unsigned char*,scalar_t__,char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, int VAR_1, ssize_t VAR_2)
{
 unsigned char *VAR_3;
 ssize_t VAR_4 = FUNC_3(0, &VAR_3, VAR_2);
 if (VAR_4 < 0)
  FUNC_1("error reading request body");
 FUNC_4(VAR_1, VAR_3, VAR_4, VAR_0);
 FUNC_0(VAR_1);
 FUNC_2(VAR_3);
}
