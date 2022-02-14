
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int flags; int oid; } ;
struct commit {TYPE_1__ object; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct commit **VAR_1,
       int VAR_2,
       unsigned int *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct commit *VAR_5 = VAR_1[VAR_4];
  unsigned int VAR_6 = VAR_3[VAR_4];

  if (VAR_5->object.flags == VAR_6)
   FUNC_1(FUNC_0(&VAR_5->object.oid));
  VAR_5->object.flags |= VAR_0;
 }
 return 0;
}
