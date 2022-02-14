
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct payload_list {int dummy; } ;
struct dst_list {struct dst_list* dl_next; } ;


 struct dst_list* VAR_0 ;
 int FUNC_0 (struct payload_list*,struct dst_list*) ;

__attribute__((used)) static void
FUNC_1(struct payload_list *VAR_1)
{
 struct dst_list *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->dl_next) {
  FUNC_0(VAR_1, VAR_2);
 }
}
