
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int flags; int state_mutex; int stop_wq; struct spu* spu; } ;
struct spu {int node; } ;


 int VAR_0 ;
 struct spu_context* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu*,struct spu_context*) ;
 int FUNC_4 (struct spu*,struct spu_context*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct spu_context *VAR_1, int VAR_2, int VAR_3)
{
 struct spu *VAR_4 = VAR_1->spu;
 struct spu_context *VAR_5 = ((void*)0);

 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_3, VAR_4->node);
  if (VAR_5 || VAR_2) {
   FUNC_4(VAR_4, VAR_1, VAR_5 == ((void*)0));
   if (VAR_5) {
    if (VAR_5->flags & VAR_0)
     FUNC_5(&VAR_5->stop_wq);
    else {
     FUNC_2(VAR_1);
     FUNC_3(VAR_4, VAR_5);


     FUNC_1(&VAR_1->state_mutex);
    }
   }
  }
 }

 return VAR_5 != ((void*)0);
}
