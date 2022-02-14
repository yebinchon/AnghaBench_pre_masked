
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {struct dmz_mblock** map_mblk; } ;
struct dmz_mblock {scalar_t__ data; } ;
struct dmz_map {void* bzone_id; void* dzone_id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct dmz_metadata*,struct dmz_mblock*) ;

__attribute__((used)) static void FUNC_2(struct dmz_metadata *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 struct dmz_mblock *VAR_6 = VAR_2->map_mblk[VAR_3 >> VAR_1];
 struct dmz_map *VAR_7 = (struct dmz_map *) VAR_6->data;
 int VAR_8 = VAR_3 & VAR_0;

 VAR_7[VAR_8].dzone_id = FUNC_0(VAR_4);
 VAR_7[VAR_8].bzone_id = FUNC_0(VAR_5);
 FUNC_1(VAR_2, VAR_6);
}
