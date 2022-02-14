
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int lock; int retry_on_resume_list; int deferred_bio_list; } ;
struct bio_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio_list*,int *) ;
 int FUNC_1 (struct bio_list*) ;
 int FUNC_2 (struct bio_list*,int ) ;
 int FUNC_3 (struct thin_c*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct thin_c *VAR_1)
{
 struct bio_list VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_2);

 FUNC_4(&VAR_1->lock, VAR_3);
 FUNC_0(&VAR_2, &VAR_1->deferred_bio_list);
 FUNC_0(&VAR_2, &VAR_1->retry_on_resume_list);
 FUNC_5(&VAR_1->lock, VAR_3);

 FUNC_2(&VAR_2, VAR_0);
 FUNC_3(VAR_1);
}
