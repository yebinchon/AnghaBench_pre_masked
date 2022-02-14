
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d40_phy_res {int allocated_src; int allocated_dst; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct d40_phy_res *VAR_3,
          bool VAR_4, int VAR_5, bool VAR_6,
          bool *VAR_7)
{
 unsigned long VAR_8;
 FUNC_1(&VAR_3->lock, VAR_8);

 *VAR_7 = ((VAR_3->allocated_src | VAR_3->allocated_dst)
   == VAR_0);

 if (!VAR_6) {

  if (VAR_3->allocated_src == VAR_0 &&
      VAR_3->allocated_dst == VAR_0) {
   VAR_3->allocated_dst = VAR_2;
   VAR_3->allocated_src = VAR_2;
   goto found_unlock;
  } else
   goto not_found_unlock;
 }


 if (VAR_4) {
  if (VAR_3->allocated_src == VAR_2)
   goto not_found_unlock;

  if (VAR_3->allocated_src == VAR_0)
   VAR_3->allocated_src = VAR_1;

  if (!(VAR_3->allocated_src & FUNC_0(VAR_5))) {
   VAR_3->allocated_src |= FUNC_0(VAR_5);
   goto found_unlock;
  } else
   goto not_found_unlock;
 } else {
  if (VAR_3->allocated_dst == VAR_2)
   goto not_found_unlock;

  if (VAR_3->allocated_dst == VAR_0)
   VAR_3->allocated_dst = VAR_1;

  if (!(VAR_3->allocated_dst & FUNC_0(VAR_5))) {
   VAR_3->allocated_dst |= FUNC_0(VAR_5);
   goto found_unlock;
  }
 }
 not_found_unlock:
 FUNC_2(&VAR_3->lock, VAR_8);
 return 0;
 found_unlock:
 FUNC_2(&VAR_3->lock, VAR_8);
 return 1;
}
