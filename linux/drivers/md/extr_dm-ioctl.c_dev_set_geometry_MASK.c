
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hd_geometry {unsigned long cylinders; unsigned long heads; unsigned long sectors; unsigned long start; } ;
struct file {int dummy; } ;
struct dm_ioctl {int data_start; char* data; scalar_t__ data_size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*,struct hd_geometry*) ;
 struct mapped_device* FUNC_3 (struct dm_ioctl*) ;
 scalar_t__ FUNC_4 (char*,void*) ;
 int FUNC_5 (char*,char*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,char*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, struct dm_ioctl *VAR_4, size_t VAR_5)
{
 int VAR_6 = -VAR_0, VAR_7;
 struct mapped_device *VAR_8;
 struct hd_geometry VAR_9;
 unsigned long VAR_10[4];
 char *VAR_11 = (char *) VAR_4 + VAR_4->data_start;
 char VAR_12;

 VAR_8 = FUNC_3(VAR_4);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_11 < VAR_4->data ||
     FUNC_4(VAR_11, (void *) VAR_4 + VAR_5)) {
  FUNC_0("Invalid geometry supplied.");
  goto out;
 }

 VAR_7 = FUNC_5(VAR_11, "%lu %lu %lu %lu%c", VAR_10,
     VAR_10 + 1, VAR_10 + 2, VAR_10 + 3, &VAR_12);

 if (VAR_7 != 4) {
  FUNC_0("Unable to interpret geometry settings.");
  goto out;
 }

 if (VAR_10[0] > 65535 || VAR_10[1] > 255 ||
     VAR_10[2] > 255 || VAR_10[3] > VAR_2) {
  FUNC_0("Geometry exceeds range limits.");
  goto out;
 }

 VAR_9.cylinders = VAR_10[0];
 VAR_9.heads = VAR_10[1];
 VAR_9.sectors = VAR_10[2];
 VAR_9.start = VAR_10[3];

 VAR_6 = FUNC_2(VAR_8, &VAR_9);

 VAR_4->data_size = 0;

out:
 FUNC_1(VAR_8);
 return VAR_6;
}
