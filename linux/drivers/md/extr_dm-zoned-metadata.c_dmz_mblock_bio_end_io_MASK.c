
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_mblock {int state; } ;
struct bio {scalar_t__ bi_status; struct dmz_mblock* bi_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6(struct bio *VAR_4)
{
 struct dmz_mblock *VAR_5 = VAR_4->bi_private;
 int VAR_6;

 if (VAR_4->bi_status)
  FUNC_3(VAR_0, &VAR_5->state);

 if (FUNC_0(VAR_4) == VAR_3)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 FUNC_2(VAR_6, &VAR_5->state);
 FUNC_4();
 FUNC_5(&VAR_5->state, VAR_6);

 FUNC_1(VAR_4);
}
