
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_3(int VAR_11, char *VAR_12[], int VAR_13, uint32_t *VAR_14)
{
 int VAR_15 = 0;
 char *VAR_16 = ((void*)0);

 if (VAR_11 == VAR_13 + 1)
  VAR_16 = VAR_12[VAR_13];
 else if (VAR_11 != VAR_13)
  return -1;

 if (!VAR_16 || !FUNC_2(VAR_16, "sge"))
  VAR_15 += FUNC_0(VAR_7, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "mc3"))
  VAR_15 += FUNC_0(VAR_2, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "mc4"))
  VAR_15 += FUNC_0(VAR_3, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "tpi"))
  VAR_15 += FUNC_0(VAR_9, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "tp"))
  VAR_15 += FUNC_0(VAR_8, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "rat"))
  VAR_15 += FUNC_0(VAR_6, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "cspi"))
  VAR_15 += FUNC_0(VAR_0, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "espi"))
  VAR_15 += FUNC_0(VAR_1, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "ulp"))
  VAR_15 += FUNC_0(VAR_10, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "pl"))
  VAR_15 += FUNC_0(VAR_5, VAR_14);
 if (!VAR_16 || !FUNC_2(VAR_16, "mc5"))
  VAR_15 += FUNC_0(VAR_4, VAR_14);
 if (!VAR_15)
  FUNC_1(1, "unknown block \"%s\"", VAR_16);
 return 0;
}
