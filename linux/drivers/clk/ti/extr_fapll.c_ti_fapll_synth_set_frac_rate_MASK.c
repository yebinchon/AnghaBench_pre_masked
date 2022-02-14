
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long u32 ;
struct fapll_synth {int freq; } ;


 unsigned long FUNC_0 (int,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static u32 FUNC_3(struct fapll_synth *VAR_5,
     unsigned long VAR_6,
     unsigned long VAR_7)
{
 u32 VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11;

 VAR_8 = FUNC_0((u64)VAR_7 * VAR_4, VAR_6);
 VAR_8 = VAR_8 / VAR_3;
 if (VAR_8 > VAR_2)
  return -VAR_0;
 if (!VAR_8)
  VAR_8 = 1;

 for (; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_0((u64)VAR_7 *
       VAR_4 *
       10000000,
       VAR_6 * VAR_8);
  VAR_10 = VAR_9 % 10000000;
  VAR_9 /= 10000000;

  if (VAR_9 <= VAR_3)
   break;
 }

 if (VAR_9 > VAR_3)
  return -VAR_0;

 VAR_11 = FUNC_1(VAR_5->freq);
 VAR_11 &= ~0x1fffffff;
 VAR_11 |= (VAR_9 & VAR_3) << 24;
 VAR_11 |= (VAR_10 & 0xffffff);
 VAR_11 |= VAR_1;
 FUNC_2(VAR_11, VAR_5->freq);

 return VAR_8;
}
