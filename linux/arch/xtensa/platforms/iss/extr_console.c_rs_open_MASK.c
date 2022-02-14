
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; int * port; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_6, struct file * VAR_7)
{
 VAR_6->port = &VAR_3;
 FUNC_1(&VAR_5);
 if (VAR_6->count == 1) {
  FUNC_3(&VAR_4, VAR_2, 0);
  FUNC_0(&VAR_4, VAR_1 + VAR_0);
 }
 FUNC_2(&VAR_5);

 return 0;
}
