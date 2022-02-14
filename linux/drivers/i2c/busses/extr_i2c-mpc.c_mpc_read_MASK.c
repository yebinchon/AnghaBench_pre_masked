
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int timeout; } ;
struct mpc_i2c {scalar_t__ base; TYPE_1__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct mpc_i2c*,unsigned int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct mpc_i2c*,int) ;

__attribute__((used)) static int FUNC_4(struct mpc_i2c *VAR_9, int VAR_10,
      u8 *VAR_11, int VAR_12, int VAR_13, bool VAR_14)
{
 unsigned VAR_15 = VAR_9->adap.timeout;
 int VAR_16, VAR_17;
 u32 VAR_18 = VAR_13 ? VAR_4 : 0;


 FUNC_3(VAR_9, VAR_1 | VAR_0 | VAR_2 | VAR_3 | VAR_18);

 FUNC_2((VAR_10 << 1) | 1, VAR_9->base + VAR_8);

 VAR_17 = FUNC_0(VAR_9, VAR_15, 1);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_12) {
  if (VAR_12 == 1 && !VAR_14)
   FUNC_3(VAR_9, VAR_1 | VAR_0 | VAR_2 | VAR_5);
  else
   FUNC_3(VAR_9, VAR_1 | VAR_0 | VAR_2);

  FUNC_1(VAR_9->base + VAR_8);
 }

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  u8 VAR_19;

  VAR_17 = FUNC_0(VAR_9, VAR_15, 0);
  if (VAR_17 < 0)
   return VAR_17;





  if (VAR_16 || !VAR_14) {

   if (VAR_16 == VAR_12 - 2)
    FUNC_3(VAR_9, VAR_1 | VAR_0 | VAR_2
      | VAR_5);

   if (VAR_16 == VAR_12 - 1)
    FUNC_3(VAR_9, VAR_1 | VAR_0 | VAR_2
      | VAR_3);
  }

  VAR_19 = FUNC_1(VAR_9->base + VAR_8);





  if (VAR_16 == 0 && VAR_14) {
   if (VAR_19 == 0 || VAR_19 > VAR_7)
    return -VAR_6;
   VAR_12 += VAR_19;




   if (VAR_12 == 2)
    FUNC_3(VAR_9, VAR_1 | VAR_0 | VAR_2
      | VAR_5);
  }
  VAR_11[VAR_16] = VAR_19;
 }

 return VAR_12;
}
