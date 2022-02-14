
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int,int,int,int,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (int,int,int ,int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_4(u32 VAR_16, u32 VAR_17, u64 VAR_18, u64 VAR_19,
        u64 VAR_20, u64 VAR_21)
{
 int VAR_22;
 u64 VAR_23, VAR_24;


 if (VAR_17 && (VAR_17 &
  ~(VAR_9|VAR_10|VAR_11)))
  return -VAR_1;







 if (!(VAR_14 || VAR_12))
  goto inject;


 if (VAR_16 & VAR_0) {
  if (VAR_15 != VAR_10)
   goto inject;
 } else if (!(VAR_16 & VAR_6) && !(VAR_17 & VAR_10))
  goto inject;







 VAR_23 = VAR_18 & VAR_19;
 VAR_24 = ~VAR_19 + 1;

 if (((VAR_19 & VAR_7) != VAR_7) ||
     ((FUNC_3(VAR_23, VAR_24, VAR_3, VAR_4)
    != VAR_8) &&
      (FUNC_3(VAR_23, VAR_24, VAR_2, VAR_5)
    != VAR_8)))
  return -VAR_1;

inject:
 FUNC_1(&VAR_13);
 VAR_22 = FUNC_0(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
 FUNC_2(&VAR_13);

 return VAR_22;
}
