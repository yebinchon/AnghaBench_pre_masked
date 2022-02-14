
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cirrus_device {int conn; int pipe; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cirrus_device *VAR_3)
{
 return FUNC_1(&VAR_3->dev,
         &VAR_3->pipe,
         &VAR_2,
         VAR_0,
         FUNC_0(VAR_0),
         VAR_1,
         &VAR_3->conn);
}
