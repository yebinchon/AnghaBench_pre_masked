
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 if (!FUNC_0(VAR_0, VAR_1)) {
  FUNC_1("KASLR disabled: CPU has no PRNG\n");
  return 0;
 }
 if (FUNC_0(VAR_2, VAR_4))
  return VAR_7;
 if (FUNC_0(VAR_2, VAR_3))
  return VAR_5;
 else
  return VAR_6;
}
