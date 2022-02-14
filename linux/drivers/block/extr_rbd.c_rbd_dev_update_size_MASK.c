
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct rbd_device {int disk; TYPE_1__ mapping; int flags; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct rbd_device *VAR_3)
{
 sector_t VAR_4;






 if (FUNC_3(VAR_0, &VAR_3->flags) &&
     !FUNC_3(VAR_1, &VAR_3->flags)) {
  VAR_4 = (sector_t)VAR_3->mapping.size / VAR_2;
  FUNC_0("setting size to %llu sectors", (unsigned long long)VAR_4);
  FUNC_2(VAR_3->disk, VAR_4);
  FUNC_1(VAR_3->disk);
 }
}
