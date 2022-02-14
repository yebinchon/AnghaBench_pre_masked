
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {char* snap_names; TYPE_1__* snapc; } ;
struct rbd_device {TYPE_2__ header; } ;
struct TYPE_3__ {scalar_t__ num_snaps; } ;


 int VAR_0 ;
 char const* FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static const char *FUNC_3(struct rbd_device *VAR_1, u32 VAR_2)
{
 const char *VAR_3;

 FUNC_1(VAR_2 < VAR_1->header.snapc->num_snaps);



 VAR_3 = VAR_1->header.snap_names;
 while (VAR_2--)
  VAR_3 += FUNC_2(VAR_3) + 1;

 return FUNC_0(VAR_3, VAR_0);
}
