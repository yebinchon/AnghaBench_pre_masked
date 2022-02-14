
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct drbd_device {scalar_t__ ed_uuid; TYPE_2__* ldev; } ;
struct TYPE_3__ {scalar_t__* uuid; } ;
struct TYPE_4__ {TYPE_1__ md; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct drbd_device*,char*,char const*,unsigned long long,...) ;
 scalar_t__ FUNC_1 (struct drbd_device*,int ) ;
 int FUNC_2 (struct drbd_device*) ;

void FUNC_3(struct drbd_device *VAR_5, const char *VAR_6)
{
 if (FUNC_1(VAR_5, VAR_0)) {
  u64 *VAR_7 = VAR_5->ldev->md.uuid;
  FUNC_0(VAR_5, "%s %016llX:%016llX:%016llX:%016llX\n",
       VAR_6,
       (unsigned long long)VAR_7[VAR_2],
       (unsigned long long)VAR_7[VAR_1],
       (unsigned long long)VAR_7[VAR_4],
       (unsigned long long)VAR_7[VAR_3]);
  FUNC_2(VAR_5);
 } else {
  FUNC_0(VAR_5, "%s effective data uuid: %016llX\n",
    VAR_6,
    (unsigned long long)VAR_5->ed_uuid);
 }
}
