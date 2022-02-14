
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,char const*,int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1, unsigned long *VAR_2,
        const char *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  FUNC_1(VAR_1, "%s[%d] 0x%lx\n", VAR_3, VAR_4, VAR_2[VAR_4]);
}
