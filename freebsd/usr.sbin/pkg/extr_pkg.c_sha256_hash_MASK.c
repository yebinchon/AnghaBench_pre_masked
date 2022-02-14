
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned char) ;

__attribute__((used)) static void
FUNC_1(unsigned char VAR_1[VAR_0],
    char VAR_2[VAR_0 * 2 + 1])
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2 + (VAR_3 * 2), "%02x", VAR_1[VAR_3]);

 VAR_2[VAR_0 * 2] = '\0';
}
