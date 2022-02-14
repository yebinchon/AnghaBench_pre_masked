
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int idx; } ;
typedef TYPE_1__ xz_file_info ;
typedef int off_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

off_t
FUNC_3(int VAR_1)
{
 xz_file_info VAR_2 = VAR_0;
 if (!FUNC_2(&VAR_2, VAR_1)) {
  off_t VAR_3 = FUNC_1(VAR_2.idx);
  FUNC_0(VAR_2.idx, ((void*)0));
  return VAR_3;
 }
 return 0;
}
