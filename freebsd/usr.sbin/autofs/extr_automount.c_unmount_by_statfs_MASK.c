
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * val; } ;
struct statfs {int f_mntonname; TYPE_1__ f_fsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(const struct statfs *VAR_2, bool VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_0(&VAR_4, "FSID:%d:%d",
     VAR_2->f_fsid.val[0], VAR_2->f_fsid.val[1]);
 if (VAR_6 < 0)
  FUNC_3(1, "asprintf");

 FUNC_2("unmounting %s using %s", VAR_2->f_mntonname, VAR_4);

 VAR_7 = VAR_0;
 if (VAR_3)
  VAR_7 |= VAR_1;
 VAR_5 = FUNC_5(VAR_4, VAR_7);
 FUNC_1(VAR_4);
 if (VAR_5 != 0)
  FUNC_4("cannot unmount %s", VAR_2->f_mntonname);

 return (VAR_5);
}
