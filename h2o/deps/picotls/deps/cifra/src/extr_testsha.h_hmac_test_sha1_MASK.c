
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int hashsz; } ;
typedef TYPE_1__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *,int,int *,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_5(const cf_chash *VAR_1,
                                  const char *VAR_2,
                                  const char *VAR_3)
{
  uint8_t VAR_4[VAR_0];
  uint8_t VAR_5[80], VAR_6[73];




  FUNC_4(VAR_5, 0xaa, 80);
  FUNC_3(VAR_6, "Test Using Larger Than Block-Size Key - Hash Key First", 54);
  FUNC_1(VAR_5, 80, VAR_6, 54, VAR_4, VAR_1);
  FUNC_0(FUNC_2(VAR_4, VAR_2, VAR_1->hashsz) == 0);




  FUNC_4(VAR_5, 0xaa, 80);
  FUNC_3(VAR_6, "Test Using Larger Than Block-Size Key and Larger Than One Block-Size Data", 73);
  FUNC_1(VAR_5, 80, VAR_6, 73, VAR_4, VAR_1);
  FUNC_0(FUNC_2(VAR_4, VAR_3, VAR_1->hashsz) == 0);
}
