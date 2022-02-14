
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_validate_flash_t {scalar_t__ status; int buf_size; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rtas_validate_flash_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rtas_validate_flash_t* const) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 struct rtas_validate_flash_t *const VAR_6 =
  &VAR_2;

 FUNC_0(&VAR_3);

 if (VAR_6->status == VAR_1) {
  VAR_6->buf_size = VAR_0;
  FUNC_2(VAR_6);
 }

 FUNC_1(&VAR_3);
 return 0;
}
