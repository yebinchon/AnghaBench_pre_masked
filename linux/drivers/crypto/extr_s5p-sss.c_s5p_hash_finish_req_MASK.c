
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s5p_hash_reqctx {int error; TYPE_2__* sg; struct s5p_aes_dev* dd; } ;
struct s5p_aes_dev {int hash_flags; int hash_lock; } ;
struct TYPE_4__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ahash_request {TYPE_1__ base; } ;
struct TYPE_5__ {int length; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct s5p_hash_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct ahash_request*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (int ,int*) ;

__attribute__((used)) static void FUNC_12(struct ahash_request *VAR_6, int VAR_7)
{
 struct s5p_hash_reqctx *VAR_8 = FUNC_1(VAR_6);
 struct s5p_aes_dev *VAR_9 = VAR_8->dd;
 unsigned long VAR_10;

 if (FUNC_11(VAR_5, &VAR_9->hash_flags))
  FUNC_2((unsigned long)FUNC_7(VAR_8->sg),
      FUNC_3(VAR_8->sg->length));

 if (FUNC_11(VAR_4, &VAR_9->hash_flags))
  FUNC_4(VAR_8->sg);

 VAR_8->sg = ((void*)0);
 VAR_9->hash_flags &= ~(FUNC_0(VAR_4) |
       FUNC_0(VAR_5));

 if (!VAR_7 && !VAR_8->error) {
  FUNC_6(VAR_6);
  if (FUNC_11(VAR_2, &VAR_9->hash_flags))
   FUNC_5(VAR_6);
 } else {
  VAR_8->error = 1;
 }

 FUNC_8(&VAR_9->hash_lock, VAR_10);
 VAR_9->hash_flags &= ~(FUNC_0(VAR_0) | FUNC_0(VAR_2) |
       FUNC_0(VAR_1) |
       FUNC_0(VAR_3));
 FUNC_9(&VAR_9->hash_lock, VAR_10);

 if (VAR_6->base.complete)
  VAR_6->base.complete(&VAR_6->base, VAR_7);
}
