
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hash_pte {int dummy; } ;
struct TYPE_2__ {int shift; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 unsigned long FUNC_2 (unsigned long,int,int) ;
 unsigned long FUNC_3 (struct hash_pte*) ;
 struct hash_pte* VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static long FUNC_4(unsigned long VAR_5, int VAR_6, int VAR_7)
{
 struct hash_pte *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 long VAR_11;
 unsigned long VAR_12, VAR_13;

 VAR_9 = FUNC_1(VAR_5, VAR_4[VAR_6].shift, VAR_7);
 VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7);


 VAR_11 = (VAR_9 & VAR_3) * VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {

  VAR_8 = VAR_2 + VAR_11;
  VAR_13 = FUNC_3(VAR_8);
  if (FUNC_0(VAR_13, VAR_12) && (VAR_13 & VAR_1))

   return VAR_11;
  ++VAR_11;
 }

 return -1;
}
