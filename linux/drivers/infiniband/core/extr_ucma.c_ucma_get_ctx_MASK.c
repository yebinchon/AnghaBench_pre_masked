
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {int dummy; } ;
struct ucma_context {int ref; scalar_t__ closing; } ;


 int VAR_0 ;
 struct ucma_context* FUNC_0 (int ) ;
 int FUNC_1 (struct ucma_context*) ;
 struct ucma_context* FUNC_2 (int,struct ucma_file*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ucma_context *FUNC_6(struct ucma_file *VAR_2, int VAR_3)
{
 struct ucma_context *VAR_4;

 FUNC_4(&VAR_1);
 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!FUNC_1(VAR_4)) {
  if (VAR_4->closing)
   VAR_4 = FUNC_0(-VAR_0);
  else
   FUNC_3(&VAR_4->ref);
 }
 FUNC_5(&VAR_1);
 return VAR_4;
}
