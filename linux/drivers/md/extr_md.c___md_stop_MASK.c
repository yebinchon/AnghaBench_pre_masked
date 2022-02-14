
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int recovery; int * to_remove; int * private; int lock; struct md_personality* pers; } ;
struct md_personality {int owner; scalar_t__ sync_request; int (* free ) (struct mddev*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mddev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mddev*,int *) ;

__attribute__((used)) static void FUNC_8(struct mddev *VAR_3)
{
 struct md_personality *VAR_4 = VAR_3->pers;
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 FUNC_1(VAR_1);
 FUNC_5(&VAR_3->lock);
 VAR_3->pers = ((void*)0);
 FUNC_6(&VAR_3->lock);
 VAR_4->free(VAR_3, VAR_3->private);
 VAR_3->private = ((void*)0);
 if (VAR_4->sync_request && VAR_3->to_remove == ((void*)0))
  VAR_3->to_remove = &VAR_2;
 FUNC_4(VAR_4->owner);
 FUNC_0(VAR_0, &VAR_3->recovery);
}
