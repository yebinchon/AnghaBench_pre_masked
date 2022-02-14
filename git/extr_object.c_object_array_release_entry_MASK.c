
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array_entry {scalar_t__ name; scalar_t__ path; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct object_array_entry *VAR_1)
{
 if (VAR_1->name != VAR_0)
  FUNC_0(VAR_1->name);
 FUNC_0(VAR_1->path);
}
