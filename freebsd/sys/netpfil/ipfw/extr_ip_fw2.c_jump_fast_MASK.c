
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {scalar_t__ id; int* idxmap; } ;
struct ip_fw {scalar_t__ cached_id; int cached_pos; int rulenum; } ;


 int FUNC_0 (struct ip_fw_chain*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_fw_chain*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_2, struct ip_fw *VAR_3, int VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7;





 if (VAR_4 != VAR_0 && VAR_3->cached_id == VAR_2->id)
  VAR_7 = VAR_3->cached_pos;
 else {
  int VAR_8 = FUNC_0(VAR_2, VAR_4, VAR_1);

  if (VAR_6 == 0 && VAR_8 <= VAR_3->rulenum)
   VAR_8 = VAR_3->rulenum + 1;
  if (VAR_2->idxmap != ((void*)0))
   VAR_7 = VAR_2->idxmap[VAR_8];
  else
   VAR_7 = FUNC_1(VAR_2, VAR_8, 0);

  if (VAR_4 != VAR_0) {
   VAR_3->cached_id = VAR_2->id;
   VAR_3->cached_pos = VAR_7;
  }
 }

 return (VAR_7);
}
