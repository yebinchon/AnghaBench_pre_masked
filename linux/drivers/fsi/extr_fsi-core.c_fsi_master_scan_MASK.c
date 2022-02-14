
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master {int n_links; int dev; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct fsi_master*,int) ;
 int FUNC_2 (struct fsi_master*,int) ;
 int FUNC_3 (struct fsi_master*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct fsi_master *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_links; VAR_1++) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2) {
   FUNC_0(&VAR_0->dev,
    "enable link %d failed: %d\n", VAR_1, VAR_2);
   continue;
  }
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2) {
   FUNC_0(&VAR_0->dev,
    "break to link %d failed: %d\n", VAR_1, VAR_2);
   continue;
  }

  FUNC_3(VAR_0, VAR_1, 0);
 }

 return 0;
}
