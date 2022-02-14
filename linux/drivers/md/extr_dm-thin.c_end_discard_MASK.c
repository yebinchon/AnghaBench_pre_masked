
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct discard_op {TYPE_1__* parent_bio; int plug; scalar_t__ bio; } ;
struct TYPE_3__ {scalar_t__ bi_status; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct discard_op *VAR_1, int VAR_2)
{
 if (VAR_1->bio) {




  FUNC_0(VAR_1->bio, VAR_1->parent_bio);
  FUNC_2(VAR_1->bio, VAR_0, 0);
  FUNC_5(VAR_1->bio);
 }

 FUNC_3(&VAR_1->plug);





 if (VAR_2 && !VAR_1->parent_bio->bi_status)
  VAR_1->parent_bio->bi_status = FUNC_4(VAR_2);
 FUNC_1(VAR_1->parent_bio);
}
