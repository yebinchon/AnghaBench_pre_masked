
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {scalar_t__ gendisk; int eeh_state; } ;
struct rsxx_bio_meta {int bio; int error; int start_time; int pending_dmas; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct rsxx_cardinfo*,int ,int ) ;
 int FUNC_6 (int ,struct rsxx_bio_meta*) ;

__attribute__((used)) static void FUNC_7(struct rsxx_cardinfo *VAR_1,
       void *VAR_2,
       unsigned int VAR_3)
{
 struct rsxx_bio_meta *VAR_4 = VAR_2;

 if (VAR_3)
  FUNC_2(&VAR_4->error, 1);

 if (FUNC_0(&VAR_4->pending_dmas)) {
  if (!VAR_1->eeh_state && VAR_1->gendisk)
   FUNC_5(VAR_1, VAR_4->bio, VAR_4->start_time);

  if (FUNC_1(&VAR_4->error))
   FUNC_4(VAR_4->bio);
  else
   FUNC_3(VAR_4->bio);
  FUNC_6(VAR_0, VAR_4);
 }
}
