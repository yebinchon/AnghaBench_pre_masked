
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv4_range {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct ipv4_range *VAR_2 = (struct ipv4_range *)VAR_0;
 struct ipv4_range *VAR_3 = (struct ipv4_range *)VAR_1;

 if (VAR_2->start > VAR_3->start) {
  return 1;
 } else if (VAR_2->start < VAR_3->start) {
  return -1;
 } else if (VAR_2->end > VAR_3->end) {
  return 1;
 } else if (VAR_2->end < VAR_3->end) {
  return -1;
 } else {
  return 0;
 }
}
