
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t fs_nr; } ;
struct dn_fsk {TYPE_1__ fs; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1, uintptr_t VAR_2, int VAR_3, void *VAR_4)
{
 struct dn_fsk *VAR_5 = VAR_1;
 int VAR_6 = !(VAR_3 & VAR_0) ? VAR_2 :
  ((struct dn_fsk *)VAR_2)->fs.fs_nr;

 return (VAR_5->fs.fs_nr == VAR_6);
}
