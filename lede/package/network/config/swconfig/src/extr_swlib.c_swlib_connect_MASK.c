
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swlib_scan_arg {char const* name; struct switch_dev* head; int * ptr; } ;
struct switch_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,struct swlib_scan_arg*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

struct switch_dev *
FUNC_3(const char *VAR_3)
{
 struct swlib_scan_arg VAR_4;

 if (!VAR_2) {
  if (FUNC_2() < 0)
   return ((void*)0);
 };

 VAR_4.head = ((void*)0);
 VAR_4.ptr = ((void*)0);
 VAR_4.name = VAR_3;
 FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_4);

 if (!VAR_2)
  FUNC_1();

 return VAR_4.head;
}
