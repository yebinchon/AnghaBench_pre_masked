
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int guest_table_lock; int host_to_guest; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct gmap*) ;
 unsigned long* FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gmap *VAR_2, unsigned long VAR_3)
{
 unsigned long *VAR_4;
 int VAR_5 = 0;

 FUNC_0(FUNC_1(VAR_2));
 FUNC_3(&VAR_2->guest_table_lock);
 VAR_4 = FUNC_2(&VAR_2->host_to_guest, VAR_3 >> VAR_0);
 if (VAR_4) {
  VAR_5 = (*VAR_4 != VAR_1);
  *VAR_4 = VAR_1;
 }
 FUNC_4(&VAR_2->guest_table_lock);
 return VAR_5;
}
