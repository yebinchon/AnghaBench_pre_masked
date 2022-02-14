
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_head {scalar_t__ height; scalar_t__ width; } ;



__attribute__((used)) static bool FUNC_0(struct qxl_head *VAR_0)
{
 return VAR_0->width && VAR_0->height;
}
