
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {scalar_t__ rs_last_bcast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct drbd_device *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2->rs_last_bcast + 2*VAR_0);
}
