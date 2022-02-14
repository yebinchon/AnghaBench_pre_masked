
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_backing_dev {int disk_conf; } ;
struct disk_conf {int disk_drain; int disk_flushes; } ;
typedef enum write_ordering_e { ____Placeholder_write_ordering_e } write_ordering_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct disk_conf* FUNC_0 (int ) ;

__attribute__((used)) static enum write_ordering_e
FUNC_1(struct drbd_backing_dev *VAR_3, enum write_ordering_e VAR_4)
{
 struct disk_conf *VAR_5;

 VAR_5 = FUNC_0(VAR_3->disk_conf);

 if (VAR_4 == VAR_0 && !VAR_5->disk_flushes)
  VAR_4 = VAR_1;
 if (VAR_4 == VAR_1 && !VAR_5->disk_drain)
  VAR_4 = VAR_2;

 return VAR_4;
}
