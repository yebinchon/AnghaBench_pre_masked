
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct protection_domain {int lock; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long) ;
 int* FUNC_6 (struct protection_domain*,unsigned long,unsigned long,int *,int ,int*) ;
 struct page* FUNC_7 (int*,int,struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct protection_domain*) ;

__attribute__((used)) static int FUNC_12(struct protection_domain *VAR_9,
     unsigned long VAR_10,
     unsigned long VAR_11,
     unsigned long VAR_12,
     int VAR_13,
     gfp_t VAR_14)
{
 struct page *VAR_15 = ((void*)0);
 bool VAR_16 = 0;
 u64 VAR_17, *VAR_18;
 int VAR_19, VAR_20, VAR_21;

 FUNC_0(!FUNC_1(VAR_10, VAR_12));
 FUNC_0(!FUNC_1(VAR_11, VAR_12));

 VAR_19 = -VAR_0;
 if (!(VAR_13 & VAR_4))
  goto out;

 VAR_21 = FUNC_3(VAR_12);
 VAR_18 = FUNC_6(VAR_9, VAR_10, VAR_12, ((void*)0), VAR_14, &VAR_16);

 VAR_19 = -VAR_1;
 if (!VAR_18)
  goto out;

 for (VAR_20 = 0; VAR_20 < VAR_21; ++VAR_20)
  VAR_15 = FUNC_7(&VAR_18[VAR_20], VAR_18[VAR_20], VAR_15);

 if (VAR_15 != ((void*)0))
  VAR_16 = 1;

 if (VAR_21 > 1) {
  VAR_17 = FUNC_2(FUNC_5(VAR_11), VAR_12);
  VAR_17 |= FUNC_4(7) | VAR_8 | VAR_5;
 } else
  VAR_17 = FUNC_5(VAR_11) | VAR_8 | VAR_5;

 if (VAR_13 & VAR_2)
  VAR_17 |= VAR_6;
 if (VAR_13 & VAR_3)
  VAR_17 |= VAR_7;

 for (VAR_20 = 0; VAR_20 < VAR_21; ++VAR_20)
  VAR_18[VAR_20] = VAR_17;

 VAR_19 = 0;

out:
 if (VAR_16) {
  unsigned long VAR_22;

  FUNC_9(&VAR_9->lock, VAR_22);
  FUNC_11(VAR_9);
  FUNC_10(&VAR_9->lock, VAR_22);
 }


 FUNC_8(VAR_15);

 return VAR_19;
}
