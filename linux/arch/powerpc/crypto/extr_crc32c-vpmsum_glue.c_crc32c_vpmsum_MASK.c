
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,unsigned char const*,unsigned int) ;
 int FUNC_1 (int ,unsigned char const*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static u32 FUNC_9(u32 VAR_3, unsigned char const *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (VAR_5 < (VAR_0 + VAR_1) || !FUNC_2())
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 if ((unsigned long)VAR_4 & VAR_2) {
  VAR_6 = VAR_1 - ((unsigned long)VAR_4 & VAR_2);
  VAR_3 = FUNC_0(VAR_3, VAR_4, VAR_6);
  VAR_5 -= VAR_6;
  VAR_4 += VAR_6;
 }

 if (VAR_5 & ~VAR_2) {
  FUNC_7();
  FUNC_5();
  FUNC_4();
  VAR_3 = FUNC_1(VAR_3, VAR_4, VAR_5 & ~VAR_2);
  FUNC_3();
  FUNC_6();
  FUNC_8();
 }

 VAR_7 = VAR_5 & VAR_2;
 if (VAR_7) {
  VAR_4 += VAR_5 & ~VAR_2;
  VAR_3 = FUNC_0(VAR_3, VAR_4, VAR_7);
 }

 return VAR_3;
}
