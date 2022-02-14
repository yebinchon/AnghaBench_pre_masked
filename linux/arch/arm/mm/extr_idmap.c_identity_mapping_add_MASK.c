
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(pgd_t *VAR_5, const char *VAR_6,
     const char *VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_9 = FUNC_6(VAR_6);
 VAR_10 = FUNC_6(VAR_7);
 FUNC_5("Setting up static identity map for 0x%lx - 0x%lx\n", VAR_9, VAR_10);

 VAR_8 |= VAR_4 | VAR_3 | VAR_2;

 if (FUNC_0() <= VAR_0 && !FUNC_1())
  VAR_8 |= VAR_1;

 VAR_5 += FUNC_4(VAR_9);
 do {
  VAR_11 = FUNC_3(VAR_9, VAR_10);
  FUNC_2(VAR_5, VAR_9, VAR_11, VAR_8);
 } while (VAR_5++, VAR_9 = VAR_11, VAR_9 != VAR_10);
}
