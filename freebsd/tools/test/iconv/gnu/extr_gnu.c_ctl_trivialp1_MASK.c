
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ iconv_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int*) ;

__attribute__((used)) static int
FUNC_3(void)
{
 iconv_t VAR_1;
        int VAR_2, VAR_3;

 VAR_1 = FUNC_1("latin2", "latin2");
 if (VAR_1 == (iconv_t)-1)
  return (-1);
 if (FUNC_2(VAR_1, VAR_0, &VAR_2) == 0) {
  VAR_3 = (VAR_2 == 1) ? 0 : -1;
        } else
                VAR_3 = -1;
 if (FUNC_0(VAR_1) == -1)
  return (-1);
 return (VAR_3);
}
