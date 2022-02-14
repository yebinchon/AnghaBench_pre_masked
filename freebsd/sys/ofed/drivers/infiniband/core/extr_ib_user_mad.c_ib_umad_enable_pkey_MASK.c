
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_file {int use_pkey_index; int mutex; scalar_t__ already_used; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(struct ib_umad_file *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_1->mutex);
 if (VAR_1->already_used)
  VAR_2 = -VAR_0;
 else
  VAR_1->use_pkey_index = 1;
 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}
