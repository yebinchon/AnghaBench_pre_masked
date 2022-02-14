
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {size_t type; } ;
__attribute__((used)) static const char *FUNC_0(struct gb_interface *VAR_0)
{
 static const char * const VAR_1[] = {
  [130] = "invalid",
  [128] = "unknown",
  [132] = "dummy",
  [129] = "unipro",
  [131] = "greybus",
 };

 return VAR_1[VAR_0->type];
}
