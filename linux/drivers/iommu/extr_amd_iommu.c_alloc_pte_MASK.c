
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct protection_domain {int mode; scalar_t__* pt_root; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 scalar_t__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 size_t FUNC_5 (int,unsigned long) ;
 scalar_t__ FUNC_6 (int,int ) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__* FUNC_10 (scalar_t__*,int *,unsigned long*) ;
 int FUNC_11 (unsigned long) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct protection_domain*,unsigned long,int ) ;
 int FUNC_14 (scalar_t__*) ;
 int FUNC_15 (unsigned long) ;

__attribute__((used)) static u64 *FUNC_16(struct protection_domain *VAR_2,
        unsigned long VAR_3,
        unsigned long VAR_4,
        u64 **VAR_5,
        gfp_t VAR_6,
        bool *VAR_7)
{
 int VAR_8, VAR_9;
 u64 *VAR_10, *VAR_11;

 FUNC_0(!FUNC_15(VAR_4));

 while (VAR_3 > FUNC_7(VAR_2->mode))
  *VAR_7 = FUNC_13(VAR_2, VAR_3, VAR_6) || *VAR_7;

 VAR_8 = VAR_2->mode - 1;
 VAR_10 = &VAR_2->pt_root[FUNC_5(VAR_8, VAR_3)];
 VAR_3 = FUNC_3(VAR_3, VAR_4);
 VAR_9 = FUNC_4(VAR_4);

 while (VAR_8 > VAR_9) {
  u64 VAR_12, VAR_13;
  int VAR_14;

  VAR_12 = *VAR_10;
  VAR_14 = FUNC_8(VAR_12);





  if (FUNC_2(VAR_12) &&
      VAR_14 == VAR_0) {
   unsigned long VAR_15, VAR_16;
   u64 *VAR_17;

   VAR_17 = FUNC_10(VAR_10, ((void*)0), &VAR_15);





   for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16)
    FUNC_9(&VAR_17[VAR_16], VAR_12, 0ULL);

   *VAR_7 = 1;
   continue;
  }

  if (!FUNC_2(VAR_12) ||
      VAR_14 == VAR_1) {
   VAR_11 = (u64 *)FUNC_12(VAR_6);

   if (!VAR_11)
    return ((void*)0);

   VAR_13 = FUNC_6(VAR_8, FUNC_14(VAR_11));


   if (FUNC_9(VAR_10, VAR_12, VAR_13) != VAR_12)
    FUNC_11((unsigned long)VAR_11);
   else if (FUNC_2(VAR_12))
    *VAR_7 = 1;

   continue;
  }


  if (VAR_14 != VAR_8)
   return ((void*)0);

  VAR_8 -= 1;

  VAR_10 = FUNC_1(VAR_12);

  if (VAR_5 && VAR_8 == VAR_9)
   *VAR_5 = VAR_10;

  VAR_10 = &VAR_10[FUNC_5(VAR_8, VAR_3)];
 }

 return VAR_10;
}
