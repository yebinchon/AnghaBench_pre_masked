
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct journal_write {TYPE_2__* c; } ;
struct bio {int bi_status; struct journal_write* bi_private; } ;
struct TYPE_3__ {int io; } ;
struct TYPE_4__ {TYPE_1__ journal; } ;


 int FUNC_0 (int ,TYPE_2__*,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct journal_write *VAR_1 = VAR_0->bi_private;

 FUNC_0(VAR_0->bi_status, VAR_1->c, "journal io error");
 FUNC_1(&VAR_1->c->journal.io);
}
