
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_off_t ;
struct TYPE_4__ {size_t len; int * data; } ;
typedef TYPE_1__ git_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,size_t,int,int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,size_t,int,int,int,int ) ;

int FUNC_3(git_map *VAR_10, size_t VAR_11, int VAR_12, int VAR_13, int VAR_14, git_off_t VAR_15)
{
 int VAR_16 = VAR_8;
 int VAR_17 = 0;

 FUNC_0(VAR_10, VAR_11, VAR_12, VAR_13);

 VAR_10->data = ((void*)0);
 VAR_10->len = 0;

 if (VAR_12 & VAR_4)
  VAR_16 |= VAR_9;

 if ((VAR_13 & VAR_3) == VAR_2)
  VAR_17 = VAR_7;
 else if ((VAR_13 & VAR_3) == VAR_1)
  VAR_17 = VAR_6;
 else
  VAR_17 = VAR_7;

 VAR_10->data = FUNC_2(((void*)0), VAR_11, VAR_16, VAR_17, VAR_14, VAR_15);

 if (!VAR_10->data || VAR_10->data == VAR_5) {
  FUNC_1(VAR_0, "failed to mmap. Could not write data");
  return -1;
 }

 VAR_10->len = VAR_11;

 return 0;
}
