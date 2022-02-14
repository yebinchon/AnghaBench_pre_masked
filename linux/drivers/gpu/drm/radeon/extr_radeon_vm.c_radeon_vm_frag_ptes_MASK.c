
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct radeon_device*,struct radeon_ib*,int,int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_7,
    struct radeon_ib *VAR_8,
    uint64_t VAR_9, uint64_t VAR_10,
    uint64_t VAR_11, uint32_t VAR_12)
{
 uint64_t VAR_13 = ((VAR_7->family == VAR_1) ||
          (VAR_7->family == VAR_0)) ?
   VAR_2 : VAR_3;
 uint64_t VAR_14 = ((VAR_7->family == VAR_1) ||
          (VAR_7->family == VAR_0)) ? 0x200 : 0x80;

 uint64_t VAR_15 = FUNC_0(VAR_9, VAR_14);
 uint64_t VAR_16 = VAR_10 & ~(VAR_14 - 1);

 unsigned VAR_17;


 if ((VAR_12 & VAR_4) || !(VAR_12 & VAR_5) ||
     (VAR_15 >= VAR_16)) {

  VAR_17 = (VAR_10 - VAR_9) / 8;
  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_11, VAR_17,
        VAR_6, VAR_12);
  return;
 }


 if (VAR_9 != VAR_15) {
  VAR_17 = (VAR_15 - VAR_9) / 8;
  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_11, VAR_17,
        VAR_6, VAR_12);
  VAR_11 += VAR_6 * VAR_17;
 }


 VAR_17 = (VAR_16 - VAR_15) / 8;
 FUNC_1(VAR_7, VAR_8, VAR_15, VAR_11, VAR_17,
       VAR_6, VAR_12 | VAR_13);


 if (VAR_16 != VAR_10) {
  VAR_11 += VAR_6 * VAR_17;
  VAR_17 = (VAR_10 - VAR_16) / 8;
  FUNC_1(VAR_7, VAR_8, VAR_16, VAR_11, VAR_17,
        VAR_6, VAR_12);
 }
}
