
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* next_out; int avail_out; unsigned char* next_in; unsigned long avail_in; unsigned long total_out; } ;
typedef TYPE_1__ git_zstream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 unsigned char* FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static unsigned char *FUNC_5(char *VAR_3,
     unsigned long VAR_4,
     unsigned long *VAR_5)
{
 int VAR_6;
 unsigned char *VAR_7;
 git_zstream VAR_8;

 FUNC_3(&VAR_8, VAR_2);
 VAR_6 = FUNC_1(&VAR_8, VAR_4);
 VAR_7 = FUNC_4(VAR_6);
 VAR_8.next_out = VAR_7;
 VAR_8.avail_out = VAR_6;

 VAR_8.next_in = (unsigned char *)VAR_3;
 VAR_8.avail_in = VAR_4;
 while (FUNC_0(&VAR_8, VAR_0) == VAR_1)
  ;
 FUNC_2(&VAR_8);
 *VAR_5 = VAR_8.total_out;
 return VAR_7;
}
