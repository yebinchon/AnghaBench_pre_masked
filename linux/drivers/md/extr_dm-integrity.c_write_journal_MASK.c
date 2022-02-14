
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_completion {int comp; void* in_flight; struct dm_integrity_c* ic; } ;
struct dm_integrity_c {unsigned int journal_sections; scalar_t__ journal_io; } ;
typedef void* atomic_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dm_integrity_c*,int,unsigned int,unsigned int,struct journal_completion*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dm_integrity_c*,int ,int,unsigned int,unsigned int,struct journal_completion*) ;
 int FUNC_5 (struct dm_integrity_c*,unsigned int,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dm_integrity_c *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 struct journal_completion VAR_6;
 struct journal_completion VAR_7;
 struct journal_completion VAR_8;
 unsigned VAR_9;

 VAR_6.ic = VAR_3;
 FUNC_2(&VAR_6.comp);

 if (VAR_4 + VAR_5 <= VAR_3->journal_sections) {
  VAR_6.in_flight = (atomic_t)FUNC_0(1);
  if (VAR_3->journal_io) {
   VAR_7 = VAR_3;
   FUNC_2(&VAR_7);
   VAR_7 = (atomic_t)FUNC_0(0);
   FUNC_1(VAR_3, 1, VAR_4, VAR_5, &VAR_7);
   FUNC_7(&VAR_7);
  } else {
   for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    FUNC_5(VAR_3, VAR_4 + VAR_9, 1);
  }
  FUNC_4(VAR_3, VAR_1, VAR_0 | VAR_2, VAR_4,
      VAR_5, &VAR_6);
 } else {
  unsigned VAR_10;
  VAR_6.in_flight = (atomic_t)FUNC_0(2);
  VAR_10 = VAR_3->journal_sections - VAR_4;
  if (VAR_3->journal_io) {
   VAR_7 = VAR_3;
   FUNC_2(&VAR_7);
   VAR_7 = (atomic_t)FUNC_0(0);
   FUNC_1(VAR_3, 1, VAR_4, VAR_10, &VAR_7);
   if (FUNC_6(&VAR_7)) {
    FUNC_4(VAR_3, VAR_1, VAR_0, VAR_4, VAR_10, &VAR_6);
    FUNC_3(&VAR_7);
    VAR_7 = (atomic_t)FUNC_0(0);
    FUNC_1(VAR_3, 1, 0, VAR_5 - VAR_10, &VAR_7);
    FUNC_7(&VAR_7);
   } else {
    VAR_8 = VAR_3;
    FUNC_2(&VAR_8);
    VAR_8 = (atomic_t)FUNC_0(0);
    FUNC_1(VAR_3, 1, 0, VAR_5 - VAR_10, &VAR_8);
    FUNC_7(&VAR_7);
    FUNC_4(VAR_3, VAR_1, VAR_0, VAR_4, VAR_10, &VAR_6);
    FUNC_7(&VAR_8);
   }
  } else {
   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
    FUNC_5(VAR_3, VAR_4 + VAR_9, 1);
   FUNC_4(VAR_3, VAR_1, VAR_0, VAR_4, VAR_10, &VAR_6);
   for (VAR_9 = 0; VAR_9 < VAR_5 - VAR_10; VAR_9++)
    FUNC_5(VAR_3, VAR_9, 1);
  }
  FUNC_4(VAR_3, VAR_1, VAR_0, 0, VAR_5 - VAR_10, &VAR_6);
 }

 FUNC_7(&VAR_6.comp);
}
