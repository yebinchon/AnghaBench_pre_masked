
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_list {struct page* page; } ;
struct page {int dummy; } ;
struct journal_completion {int in_flight; } ;
struct dm_integrity_c {unsigned int journal_section_sectors; TYPE_1__* journal_xor; struct page_list* journal; struct page_list* journal_io; } ;
struct async_submit_ctl {int dummy; } ;
struct TYPE_2__ {struct page* page; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct page*,struct page**,unsigned int,int,size_t,struct async_submit_ctl*) ;
 int FUNC_3 (int,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct async_submit_ctl*,int ,int *,int ,struct journal_completion*,int *) ;
 scalar_t__ FUNC_5 (int) ;
 size_t FUNC_6 (size_t,size_t) ;
 int FUNC_7 (struct dm_integrity_c*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;
 int FUNC_9 (struct dm_integrity_c*,unsigned int,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct dm_integrity_c *VAR_5, bool VAR_6, unsigned VAR_7,
   unsigned VAR_8, struct journal_completion *VAR_9)
{
 struct async_submit_ctl VAR_10;
 size_t VAR_11 = (size_t)(VAR_8 * VAR_5->journal_section_sectors) << VAR_3;
 unsigned VAR_12, VAR_13, VAR_14;
 struct page_list *VAR_15, *VAR_16;

 if (FUNC_5(VAR_6)) {
  VAR_15 = VAR_5->journal;
  VAR_16 = VAR_5->journal_io;
 } else {
  VAR_15 = VAR_5->journal_io;
  VAR_16 = VAR_5->journal;
 }

 FUNC_7(VAR_5, VAR_7, 0, &VAR_12, &VAR_13);

 FUNC_3(FUNC_8(VAR_13 + VAR_11, VAR_2) >> VAR_1, &VAR_9->in_flight);

 FUNC_4(&VAR_10, VAR_0, ((void*)0), VAR_4, VAR_9, ((void*)0));

 VAR_14 = VAR_12;

 do {
  size_t VAR_17;
  struct page *VAR_18[2];
  struct page *VAR_19;

  while (FUNC_10(VAR_12 == VAR_14)) {
   unsigned VAR_20;
   if (FUNC_5(VAR_6))
    FUNC_9(VAR_5, VAR_7, 1);
   VAR_7++;
   VAR_8--;
   if (!VAR_8)
    break;
   FUNC_7(VAR_5, VAR_7, 0, &VAR_14, &VAR_20);
  }

  VAR_17 = FUNC_6(VAR_11, (size_t)VAR_2 - VAR_13);
  VAR_19 = VAR_16[VAR_12].page;
  VAR_18[0] = VAR_15[VAR_12].page;
  VAR_18[1] = VAR_5->journal_xor[VAR_12].page;

  FUNC_2(VAR_19, VAR_18, VAR_13, 2, VAR_17, &VAR_10);

  VAR_12++;
  VAR_13 = 0;
  VAR_11 -= VAR_17;
 } while (VAR_11);

 FUNC_0(VAR_8);

 FUNC_1();
}
