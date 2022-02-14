
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_rdev; } ;
struct dax_device {int * host; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct dax_device*) ;
 struct dax_device* FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_2)
{
 struct dax_device *VAR_3 = FUNC_4(VAR_2);
 FUNC_2(VAR_3->host);
 VAR_3->host = ((void*)0);
 if (VAR_2->i_rdev)
  FUNC_1(&VAR_1, FUNC_0(VAR_2->i_rdev));
 FUNC_3(VAR_0, VAR_3);
}
