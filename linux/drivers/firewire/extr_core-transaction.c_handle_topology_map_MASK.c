
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_request {int dummy; } ;
struct fw_card {int * topology_map; } ;
struct TYPE_2__ {unsigned long long start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_card*,struct fw_request*,int ) ;
 int FUNC_2 (void*,int *,size_t) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct fw_card *VAR_4, struct fw_request *VAR_5,
  int VAR_6, int VAR_7, int VAR_8, int VAR_9,
  unsigned long long VAR_10, void *VAR_11, size_t VAR_12,
  void *VAR_13)
{
 int VAR_14;

 if (!FUNC_0(VAR_6)) {
  FUNC_1(VAR_4, VAR_5, VAR_2);
  return;
 }

 if ((VAR_10 & 3) > 0 || (VAR_12 & 3) > 0) {
  FUNC_1(VAR_4, VAR_5, VAR_0);
  return;
 }

 VAR_14 = (VAR_10 - VAR_3.start) / 4;
 FUNC_2(VAR_11, &VAR_4->topology_map[VAR_14], VAR_12);

 FUNC_1(VAR_4, VAR_5, VAR_1);
}
