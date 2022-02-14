
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_status {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_4(void)
{
 if (VAR_6 && VAR_7 <= VAR_4)
  return (0);

 FUNC_0(&VAR_5, sizeof(struct pf_status));

 if (FUNC_1(VAR_2, VAR_0, &VAR_5)) {
  FUNC_3(VAR_1, "pfs_refresh(): ioctl(): %s",
      FUNC_2(VAR_3));
  return (-1);
 }

 VAR_4 = VAR_7;
 return (0);
}
