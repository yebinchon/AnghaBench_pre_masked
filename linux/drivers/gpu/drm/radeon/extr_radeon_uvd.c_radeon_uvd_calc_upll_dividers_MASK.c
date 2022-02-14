
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_3__ {unsigned int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_2__ clock; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int,unsigned int,unsigned int) ;

int FUNC_3(struct radeon_device *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      unsigned VAR_10,
      unsigned *VAR_11,
      unsigned *VAR_12,
      unsigned *VAR_13)
{
 unsigned VAR_14, VAR_15 = VAR_1->clock.spll.reference_freq;


 unsigned VAR_16 = ~0;


 VAR_4 = FUNC_1(FUNC_1(VAR_4, VAR_2), VAR_3);
 for (VAR_14 = VAR_4; VAR_14 <= VAR_5; VAR_14 += 100) {

  uint64_t VAR_17 = (uint64_t)VAR_14 * VAR_6;
  unsigned VAR_18, VAR_19, VAR_20;

  FUNC_0(VAR_17, VAR_15);


  if (VAR_17 > VAR_7)
   break;

  VAR_17 &= VAR_7;


  VAR_18 = FUNC_2(VAR_14, VAR_2,
        VAR_8, VAR_10);
  if (VAR_18 > VAR_9)
   break;


  VAR_19 = FUNC_2(VAR_14, VAR_3,
        VAR_8, VAR_10);
  if (VAR_19 > VAR_9)
   break;


  VAR_20 = VAR_2 - (VAR_14 / VAR_18) + VAR_3 - (VAR_14 / VAR_19);


  if (VAR_20 < VAR_16) {
   *VAR_11 = VAR_17;
   *VAR_12 = VAR_18;
   *VAR_13 = VAR_19;
   VAR_16 = VAR_20;
   if (VAR_16 == 0)
    break;
  }
 }


 if (VAR_16 == ~0)
  return -VAR_0;

 return 0;
}
