
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int enabled; scalar_t__ have_fixed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int*,int*,int*) ;

u8 FUNC_3(u64 VAR_7, u64 VAR_8, u8 *VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12 = 1, VAR_13;
 int VAR_14;
 u64 VAR_15;

 if (!VAR_5)
  return VAR_2;

 if (!(VAR_4.enabled & VAR_0))
  return VAR_2;





 if ((VAR_7 < 0x100000) &&
     (VAR_4.have_fixed) &&
     (VAR_4.enabled & VAR_1)) {
  VAR_12 = 0;
  VAR_10 = FUNC_1(VAR_7, VAR_8);
  goto out;
 }





 VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_15,
      &VAR_14, &VAR_12);







 while (VAR_14) {
  VAR_11 = VAR_10;
  VAR_7 = VAR_15;
  VAR_12 = 0;
  VAR_10 = FUNC_2(VAR_7, VAR_8, &VAR_15,
       &VAR_14, &VAR_13);

  if (FUNC_0(&VAR_11, &VAR_10))
   goto out;
 }

 if (VAR_6 && (VAR_7 >= (1ULL<<32)) && (VAR_8 < VAR_6))
  VAR_10 = VAR_3;

out:
 *VAR_9 = VAR_12;
 return VAR_10;
}
