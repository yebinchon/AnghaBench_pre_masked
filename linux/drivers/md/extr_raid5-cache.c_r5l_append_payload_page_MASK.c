
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {struct r5l_io_unit* current_io; } ;
struct r5l_io_unit {int need_split_bio; int current_bio; int split_bio; } ;
struct page {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct page*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct r5l_log*,struct r5l_io_unit*) ;
 int FUNC_5 (struct r5l_log*) ;

__attribute__((used)) static void FUNC_6(struct r5l_log *VAR_1, struct page *VAR_2)
{
 struct r5l_io_unit *VAR_3 = VAR_1->current_io;

 if (VAR_3->need_split_bio) {
  FUNC_1(VAR_3->split_bio);
  VAR_3->split_bio = VAR_3->current_bio;
  VAR_3->current_bio = FUNC_5(VAR_1);
  FUNC_3(VAR_3->current_bio, VAR_3->split_bio);
  VAR_3->need_split_bio = 0;
 }

 if (!FUNC_2(VAR_3->current_bio, VAR_2, VAR_0, 0))
  FUNC_0();

 FUNC_4(VAR_1, VAR_3);
}
