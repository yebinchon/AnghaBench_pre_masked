
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_ucm_file {int dummy; } ;
struct ib_ucm_context {int ref; struct ib_ucm_file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_ucm_context* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_ucm_context* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct ib_ucm_context *FUNC_5(struct ib_ucm_file *VAR_4, int VAR_5)
{
 struct ib_ucm_context *VAR_6;

 FUNC_3(&VAR_2);
 VAR_6 = FUNC_2(&VAR_3, VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_0(-VAR_1);
 else if (VAR_6->file != VAR_4)
  VAR_6 = FUNC_0(-VAR_0);
 else
  FUNC_1(&VAR_6->ref);
 FUNC_4(&VAR_2);

 return VAR_6;
}
