
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 long FUNC_1 (unsigned long,size_t,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static inline long FUNC_2(unsigned long VAR_1, size_t VAR_2,
   unsigned long VAR_3, unsigned long VAR_4,
   unsigned long VAR_5, unsigned long VAR_6, int VAR_7)
{
 long VAR_8 = -VAR_0;

 if (!FUNC_0(VAR_3, VAR_1))
  goto out;

 if (VAR_7) {
  if (VAR_6 & ((1 << VAR_7) - 1))
   goto out;
  VAR_6 >>= VAR_7;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
out:
 return VAR_8;
}
