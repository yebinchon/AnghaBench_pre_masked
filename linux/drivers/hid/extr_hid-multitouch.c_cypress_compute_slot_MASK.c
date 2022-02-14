
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_usages {scalar_t__* contactid; } ;
struct mt_application {scalar_t__ num_received; } ;



__attribute__((used)) static int FUNC_0(struct mt_application *VAR_0,
    struct mt_usages *VAR_1)
{
 if (*VAR_1->contactid != 0 || VAR_0->num_received == 0)
  return *VAR_1->contactid;
 else
  return -1;
}
