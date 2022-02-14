
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {int dummy; } ;
struct mapped_device {struct hd_geometry geometry; } ;



int FUNC_0(struct mapped_device *VAR_0, struct hd_geometry *VAR_1)
{
 *VAR_1 = VAR_0->geometry;

 return 0;
}
