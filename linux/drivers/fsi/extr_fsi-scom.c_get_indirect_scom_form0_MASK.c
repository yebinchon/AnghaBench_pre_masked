
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct scom_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct scom_device*,int*,int,int*) ;
 int FUNC_1 (struct scom_device*,int,int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct scom_device *VAR_11, uint64_t *VAR_12,
       uint64_t VAR_13, uint32_t *VAR_14)
{
 uint64_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;

 VAR_16 = VAR_13 & VAR_4;
 VAR_15 = (VAR_13 & VAR_5) | VAR_10;
 VAR_17 = FUNC_1(VAR_11, VAR_15, VAR_16, VAR_14);
 if (VAR_17 || (*VAR_14 & VAR_2))
  return VAR_17;

 for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  VAR_17 = FUNC_0(VAR_11, &VAR_15, VAR_13, VAR_14);
  if (VAR_17 || (*VAR_14 & VAR_2))
   return VAR_17;

  VAR_19 = (VAR_15 & VAR_8) >> VAR_9;
  *VAR_14 = VAR_19 << VAR_3;
  *VAR_12 = VAR_15 & VAR_7;

  if ((VAR_15 & VAR_6) || (VAR_19 != VAR_1))
   return 0;

  FUNC_2(1);
 }
 return VAR_17;
}
