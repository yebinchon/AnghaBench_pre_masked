
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct hash_pte {int r; int v; } ;
struct TYPE_2__ {unsigned long shift; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_1 ;
 void* FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_4 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_5 (unsigned long,int,int) ;
 struct hash_pte* VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_6, int VAR_7, bool VAR_8, u64 *VAR_9, u64
  *VAR_10)
{
 struct hash_pte *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19 = VAR_4;
 unsigned long VAR_20 = VAR_5[VAR_7].shift;


 VAR_13 = FUNC_2(VAR_6, VAR_19);
 VAR_14 = FUNC_4(VAR_6, VAR_13, VAR_19);
 VAR_12 = FUNC_3(VAR_14, VAR_20, VAR_19);
 VAR_16 = FUNC_5(VAR_14, VAR_7, VAR_19);


 if (!VAR_8)
  VAR_12 = ~VAR_12;
 VAR_15 = (VAR_12 & VAR_3) * VAR_0;
 for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
  VAR_11 = VAR_2 + VAR_15;
  VAR_17 = FUNC_1(VAR_11->v);

  if (FUNC_0(VAR_17, VAR_16) && (VAR_17 & VAR_1)) {

   *VAR_9 = FUNC_1(VAR_11->v);
   *VAR_10 = FUNC_1(VAR_11->r);
   return 0;
  }
  ++VAR_15;
 }
 return -1;
}
