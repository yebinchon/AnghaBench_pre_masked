
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union aegis_block {void** words64; } ;
typedef int u64 ;
struct aegis_state {int * blocks; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct aegis_state*,union aegis_block*) ;
 int FUNC_2 (union aegis_block*,int *) ;

__attribute__((used)) static void FUNC_3(struct aegis_state *VAR_1,
      union aegis_block *VAR_2,
      u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5 = VAR_3 * 8;
 u64 VAR_6 = VAR_4 * 8;

 union aegis_block VAR_7;
 unsigned int VAR_8;

 VAR_7.words64[0] = FUNC_0(VAR_5);
 VAR_7.words64[1] = FUNC_0(VAR_6);

 FUNC_2(&VAR_7, &VAR_1->blocks[3]);

 for (VAR_8 = 0; VAR_8 < 7; VAR_8++)
  FUNC_1(VAR_1, &VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  FUNC_2(VAR_2, &VAR_1->blocks[VAR_8]);
}
