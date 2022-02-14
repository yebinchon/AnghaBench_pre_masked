
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_update_flash_t {scalar_t__ status; int * flist; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 struct rtas_update_flash_t VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5, struct file *VAR_6)
{
 struct rtas_update_flash_t *const VAR_7 = &VAR_3;

 FUNC_2(&VAR_4);

 if (VAR_7->flist) {


  if (VAR_2) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
  }

  if (VAR_7->status != VAR_0)
   VAR_7->status = FUNC_0(VAR_7->flist);

  if (VAR_7->status == VAR_1)
   VAR_2 = VAR_7->flist;
  else
   FUNC_1(VAR_7->flist);

  VAR_7->flist = ((void*)0);
 }

 FUNC_3(&VAR_4);
 return 0;
}
