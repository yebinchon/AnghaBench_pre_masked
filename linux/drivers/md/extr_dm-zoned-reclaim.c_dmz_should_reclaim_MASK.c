
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_reclaim {struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct dmz_metadata*) ;
 unsigned int FUNC_1 (struct dmz_metadata*) ;
 scalar_t__ FUNC_2 (struct dmz_reclaim*) ;

__attribute__((used)) static bool FUNC_3(struct dmz_reclaim *VAR_2)
{
 struct dmz_metadata *VAR_3 = VAR_2->metadata;
 unsigned int VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6 = VAR_5 * 100 / VAR_4;


 if (FUNC_2(VAR_2) && VAR_5 < VAR_4)
  return 1;


 if (VAR_6 >= VAR_0)
  return 0;





 return VAR_6 <= VAR_1;
}
