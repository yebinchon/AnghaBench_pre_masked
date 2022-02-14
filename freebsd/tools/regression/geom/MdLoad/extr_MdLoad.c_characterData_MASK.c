
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simdisk_softc {int sbuf; } ;
typedef char XML_Char ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
 const char *VAR_3, *VAR_4;
 struct simdisk_softc *VAR_5;

 VAR_5 = VAR_0;
 VAR_3 = VAR_1;
 VAR_4 = VAR_1 + VAR_2 - 1;
 while (FUNC_0(*VAR_3) && VAR_3 < VAR_4)
  VAR_3++;
 while (FUNC_0(*VAR_4) && VAR_4 > VAR_3)
  VAR_4--;
 if (VAR_4 != VAR_3 || !FUNC_0(*VAR_3))
  FUNC_1(VAR_5->sbuf, VAR_3, VAR_4 - VAR_3 + 1);
}
