
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_1(bool (*VAR_0)(FILE *, uint32_t, uint32_t *), FILE *VAR_1,
    uint32_t VAR_2)
{
 uint32_t VAR_3;

 if (!VAR_0(VAR_1, VAR_2, &VAR_3))
  FUNC_0(VAR_1, "0x%x", VAR_3);
 else if (VAR_3 != 0)
  FUNC_0(VAR_1, "|0x%x", VAR_3);
}
