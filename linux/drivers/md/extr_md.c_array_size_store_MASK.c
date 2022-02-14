
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ array_sectors; int external_size; int gendisk; TYPE_1__* pers; } ;
typedef int ssize_t ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ (* size ) (struct mddev*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 scalar_t__ FUNC_7 (struct mddev*,int ,int ) ;
 scalar_t__ FUNC_8 (struct mddev*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_9(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 sector_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  return VAR_6;


 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_2);
  return -VAR_1;
 }

 if (FUNC_6(VAR_3, "default", 7) == 0) {
  if (VAR_2->pers)
   VAR_5 = VAR_2->pers->size(VAR_2, 0, 0);
  else
   VAR_5 = VAR_2->array_sectors;

  VAR_2->external_size = 0;
 } else {
  if (FUNC_5(VAR_3, &VAR_5) < 0)
   VAR_6 = -VAR_1;
  else if (VAR_2->pers && VAR_2->pers->size(VAR_2, 0, 0) < VAR_5)
   VAR_6 = -VAR_0;
  else
   VAR_2->external_size = 1;
 }

 if (!VAR_6) {
  VAR_2->array_sectors = VAR_5;
  if (VAR_2->pers) {
   FUNC_4(VAR_2->gendisk, VAR_2->array_sectors);
   FUNC_3(VAR_2->gendisk);
  }
 }
 FUNC_2(VAR_2);
 return VAR_6 ?: VAR_4;
}
