
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {TYPE_1__* poolinfo; } ;
struct TYPE_2__ {int poolwords; } ;


 int VAR_0 ;
 int FUNC_0 (struct entropy_store*,int) ;
 int FUNC_1 (int,int const) ;

__attribute__((used)) static int FUNC_2(struct entropy_store *VAR_1, int VAR_2)
{
 const int VAR_3 = VAR_1->poolinfo->poolwords * 32;

 if (VAR_2 < 0)
  return -VAR_0;


 VAR_2 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_1, VAR_2);
 return 0;
}
