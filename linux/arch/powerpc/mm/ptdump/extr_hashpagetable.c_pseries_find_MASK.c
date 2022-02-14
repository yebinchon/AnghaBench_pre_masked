
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hash_pte {int v; int r; } ;
struct TYPE_2__ {unsigned long shift; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int,unsigned long) ;
 int VAR_1 ;
 long VAR_2 ;
 unsigned long FUNC_1 (unsigned long,int) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_4 (unsigned long,int,int) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 long FUNC_5 (int ,unsigned long,void*) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_6, int VAR_7, bool VAR_8, u64 *VAR_9, u64 *VAR_10)
{
 struct hash_pte VAR_11[4];
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19 = VAR_4;
 long VAR_20 = 0;
 unsigned long VAR_21 = VAR_5[VAR_7].shift;


 VAR_12 = FUNC_1(VAR_6, VAR_19);
 VAR_13 = FUNC_3(VAR_6, VAR_12, VAR_19);
 VAR_14 = FUNC_2(VAR_13, VAR_21, VAR_19);
 VAR_16 = FUNC_4(VAR_13, VAR_7, VAR_19);


 if (!VAR_8)
  VAR_14 = ~VAR_14;
 VAR_15 = (VAR_14 & VAR_3) * VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17 += 4, VAR_15 += 4) {
  VAR_20 = FUNC_5(0, VAR_15, (void *)VAR_11);

  if (VAR_20 != VAR_2)
   continue;
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
   if (FUNC_0(VAR_11[VAR_18].v, VAR_16) &&
     (VAR_11[VAR_18].v & VAR_1)) {

    *VAR_9 = VAR_11[VAR_18].v;
    *VAR_10 = VAR_11[VAR_18].r;
    return 0;
   }
  }
 }
 return -1;
}
