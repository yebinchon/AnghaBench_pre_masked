
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgprotval_t ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int,unsigned long,unsigned long,unsigned long,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static inline pgprot_t FUNC_7(pgprot_t VAR_2, unsigned long VAR_3,
       unsigned long VAR_4, unsigned long VAR_5,
       unsigned long VAR_6, int VAR_7)
{
 pgprotval_t VAR_8, VAR_9;
 unsigned long VAR_10;





 if (!(FUNC_2(VAR_2) & VAR_1))
  return VAR_2;


 VAR_10 = VAR_3 + VAR_5 * VAR_0 - 1;

 VAR_9 = FUNC_3(VAR_3, VAR_10);
 FUNC_1(VAR_7, VAR_2, VAR_9, VAR_3, VAR_10, VAR_4, "Text NX");
 VAR_8 = VAR_9;







 if (VAR_6 != (VAR_5 * VAR_0) || (VAR_3 & (VAR_6 - 1))) {
  VAR_9 = FUNC_4(VAR_3, VAR_10);
  FUNC_1(VAR_7, VAR_2, VAR_9, VAR_3, VAR_10, VAR_4, "Text RO");
  VAR_8 |= VAR_9;
 }


 VAR_9 = FUNC_5(VAR_4, VAR_4 + VAR_5 - 1);
 FUNC_1(VAR_7, VAR_2, VAR_9, VAR_3, VAR_10, VAR_4, "PCIBIOS NX");
 VAR_8 |= VAR_9;

 VAR_9 = FUNC_6(VAR_4, VAR_4 + VAR_5 - 1);
 FUNC_1(VAR_7, VAR_2, VAR_9, VAR_3, VAR_10, VAR_4, "Rodata RO");
 VAR_8 |= VAR_9;

 return FUNC_0(FUNC_2(VAR_2) & ~VAR_8);
}
